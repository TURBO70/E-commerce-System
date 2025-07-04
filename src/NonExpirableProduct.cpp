

#include "NonExpirableProduct.h"
using namespace std;

NonExpirableProduct::NonExpirableProduct(string name, double price, int quantity): Product(move(name), price, quantity) {}


