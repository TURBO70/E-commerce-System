#include <iostream>
#include <memory>
#include "Product.h"
#include "ExpirableProduct.h"
#include "NonExpirableProduct.h"
#include "ShippableProduct.h"
#include "NonShippableProduct.h"
#include "Customer.h"
#include "Cart.h"
#include "ShippingService.h"
#include "Checkout.h"
using namespace std;

int main() {
    unique_ptr<Product> cheese = make_unique<ExpirableProduct>("Cheese", 100.0, 10, false);
    unique_ptr<Product> biscuits = make_unique<ExpirableProduct>("Biscuits", 75.0, 15, false);
    unique_ptr<Product> tv = make_unique<ShippableProduct>("TV", 500.0, 5, 10000.0); 
    unique_ptr<Product> mobile = make_unique<NonExpirableProduct>("Mobile", 300.0, 20);
    unique_ptr<Product> scratchCard = make_unique<NonShippableProduct>("Mobile Scratch Card", 50.0, 50);

    Customer customer("John Doe", 1000.0);

    ShippingService shipping_service;

    Cart cart1;
    try {
        cart1.add_product(cheese.get(), 2);
        cart1.add_product(tv.get(), 1);
        cart1.add_product(scratchCard.get(), 1);
        checkout(customer, cart1, shipping_service);
        cout << "-----Checkout successful-----"<<endl;
    } catch (const std::runtime_error& e) {
        cout  << e.what() << "\n";
    }
   
}


