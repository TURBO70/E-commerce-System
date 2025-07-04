

#include "ShippableProduct.h"
using namespace std;

ShippableProduct::ShippableProduct(string name, double price, int quantity, double weight): Product(move(name), price, quantity), weight(weight) {}


