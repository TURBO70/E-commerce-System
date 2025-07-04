

#include "Customer.h"
using namespace std;

Customer::Customer(string name, double balance): name(move(name)), balance(balance) {}


