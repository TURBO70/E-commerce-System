#ifndef EXPIRABLE_PRODUCT_H
#define EXPIRABLE_PRODUCT_H

#include "Product.h"
using namespace std;

class ExpirableProduct : public Product {
public:
    bool expired;

    ExpirableProduct(string name, double price, int quantity, bool expired = false);

    bool can_expire() const override {
         return true; 
    }
    bool requires_shipping() const override {
        return false; 
    }
};

#endif 


