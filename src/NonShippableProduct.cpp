

#include "NonShippableProduct.h"
using namespace std;

NonShippableProduct::NonShippableProduct(string name, double price, int quantity): Product(move(name), price, quantity) {}


