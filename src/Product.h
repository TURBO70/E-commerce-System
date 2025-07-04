#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product {
public:
    string name;
    double price;
    int quantity;

    Product(string name, double price, int quantity);
    virtual ~Product() = default;

    virtual bool can_expire() const = 0;
    virtual bool requires_shipping() const = 0;
    virtual double get_weight() const {
        return 0.0;
    }
};

#endif

