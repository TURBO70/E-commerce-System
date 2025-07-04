#include "ExpirableProduct.h"
using namespace std;

ExpirableProduct::ExpirableProduct(string name, double price, int quantity, bool expired)
    : Product(move(name), price, quantity), expired(expired) {}


