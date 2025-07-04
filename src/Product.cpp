

#include "Product.h"
using namespace std;

Product::Product(string name, double price, int quantity): name(move(name)), price(price), quantity(quantity) {}


