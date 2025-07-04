

#ifndef NON_SHIPPABLE_PRODUCT_H
#define NON_SHIPPABLE_PRODUCT_H

#include "Product.h"
using namespace std;

class NonShippableProduct : public Product {
public:
    NonShippableProduct(string name, double price, int quantity);

    bool can_expire() const override {
        return false;
    }
    bool requires_shipping() const override {
        return false;
    }
};

#endif 


