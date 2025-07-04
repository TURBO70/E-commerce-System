#include "Cart.h"

void Cart::add_product(Product* product, int quantity) {
    if (items.count(product)) {
        items[product] += quantity;
    } else {
        items[product] = quantity;
    }
}

double Cart::get_total_price() const {
    double total = 0.0;
    for (const auto& pair : items) {
        total += pair.first->price * pair.second;
    }
    return total;
}


