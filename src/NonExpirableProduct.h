

#ifndef NON_EXPIRABLE_PRODUCT_H
#define NON_EXPIRABLE_PRODUCT_H

#include "Product.h"
using namespace std;

class NonExpirableProduct : public Product {
public:
    NonExpirableProduct(string name, double price, int quantity);

    bool can_expire() const override {
        return false;
    }
    bool requires_shipping() const override {
        return false;
    }
};

#endif 


