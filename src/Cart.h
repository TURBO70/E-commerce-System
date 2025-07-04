#ifndef CART_H
#define CART_H

#include "Product.h"
#include <vector>
#include <map>

using namespace std;
class Cart {
public:
    map<Product*, int> items;

    void add_product(Product* product, int quantity);
    double get_total_price() const;
};

#endif 


