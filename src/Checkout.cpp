#include "Checkout.h"

using namespace std;

void checkout(Customer& customer, Cart& cart, const ShippingService& shipping_service) {
    if (cart.items.empty()) {
        throw runtime_error("Error: Cart is empty.");
    }

    double subtotal = 0.0;
    double shipping_fees = 0.0;
    vector<IShippable*> shippable_items;

    for (const auto& pair : cart.items) {
        Product* product = pair.first;
        int quantity_in_cart = pair.second;

        if (product->quantity < quantity_in_cart) {
            throw runtime_error("Error: " + product->name + " is out of stock.");
        }

        if (product->can_expire()) {
            ExpirableProduct* expirable_product = dynamic_cast<ExpirableProduct*>(product);
            if (expirable_product && expirable_product->expired) {
                throw runtime_error("Error: " + product->name + " has expired.");
            }
        }

        subtotal += product->price * quantity_in_cart;

        if (product->requires_shipping()) {
            ShippableProduct* shippable_product = dynamic_cast<ShippableProduct*>(product);
            if (shippable_product) {
                for (int i = 0; i < quantity_in_cart; ++i) {
                    shippable_items.push_back(shippable_product);
                }
                
                shipping_fees += 10.0 * quantity_in_cart; 
            }
        }
    }

    double paid_amount = subtotal + shipping_fees;

    if (customer.balance < paid_amount) {
        throw runtime_error("Error: Customer's balance is insufficient.");
    }

    customer.balance -= paid_amount;
    for (const auto& pair : cart.items) {
        pair.first->quantity -= pair.second;
    }
cout<<endl;
cout<<endl;

        shipping_service.ship_items(shippable_items);

cout <<endl;
    cout << "** Checkout receipt **" << endl;
    for (const auto& pair : cart.items) {
        cout << pair.second << "x " << pair.first->name << " " << pair.first->price * pair.second << endl;
    }
    cout <<"-------------------------------------------"<<endl;
    cout << "Subtotal " << subtotal << endl;
    cout << "Shipping " << shipping_fees << endl;
    cout << "Amount " << paid_amount << endl;
    cout << "Customer current balance after payment " << customer.balance << endl;

}


