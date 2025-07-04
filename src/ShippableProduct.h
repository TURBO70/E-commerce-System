

#ifndef SHIPPABLE_PRODUCT_H
#define SHIPPABLE_PRODUCT_H

#include "Product.h"
#include "IShippable.h"
using namespace std;

class ShippableProduct : public Product, public IShippable {
public:
    double weight;

    ShippableProduct(string name, double price, int quantity, double weight);

    bool can_expire() const override {
        return false;
    }
    bool requires_shipping() const override {
        return true;
    }
    string get_name() const override {
        return name;
    }
    double get_weight() const override {
        return weight;
    }
};

#endif 


