#ifndef CHECKOUT_H
#define CHECKOUT_H

#include "Customer.h"
#include "Cart.h"
#include "ShippingService.h"
#include "ExpirableProduct.h"
#include "ShippableProduct.h"
#include <vector>
#include <stdexcept>

void checkout(Customer& customer, Cart& cart, const ShippingService& shipping_service);

#endif 


