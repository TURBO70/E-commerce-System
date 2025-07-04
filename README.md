# E-commerce System in C++

This project implements a  e-commerce system in C++.

## Features:
- Product definition with name, price, and quantity.
- Support for expirable and non-expirable products.
- Support for shippable and non-shippable products, including weight for shippable items.
- Customer cart management with quantity validation.
- Checkout process with:
    - Order subtotal, shipping fees, and total paid amount calculation.
    - Customer balance update.
    - Integration with a `ShippingService` for shippable items.
- Error handling for:
    - Empty cart.
    - Insufficient customer balance.
    - Out-of-stock products.
    - Expired products.

## Project Structure:
- `Product.h`, `Product.cpp`: Base class for all products.
- `IShippable.h`: Interface for shippable items.
- `ExpirableProduct.h`, `ExpirableProduct.cpp`: Products that can expire (e.g., Cheese, Biscuits).
- `NonExpirableProduct.h`, `NonExpirableProduct.cpp`: Products that do not expire (e.g., Mobile).
- `ShippableProduct.h`, `ShippableProduct.cpp`: Products that require shipping and have weight (e.g., TV, Cheese).
- `NonShippableProduct.h`, `NonShippableProduct.cpp`: Products that do not require shipping (e.g., Mobile Scratch Card).
- `Customer.h`, `Customer.cpp`: Represents a customer with a name and balance.
- `Cart.h`, `Cart.cpp`: Manages products added by a customer.
- `ShippingService.h`: Handles the shipping of `IShippable` items.
- `Checkout.h`, `Checkout.cpp`: Contains the core checkout logic and validation.
- `main.cpp`: Contains example usage and test cases.

## How to Compile and Run:

1.  **Prerequisites:**
    You need a C++ compiler (like g++) installed on your system.

2.  **Compile:**
    Navigate to the project directory in your terminal and compile the source files using the following command:
    ```bash
    g++ -std=c++17 Product.cpp ExpirableProduct.cpp NonExpirableProduct.cpp ShippableProduct.cpp NonShippableProduct.cpp Customer.cpp Cart.cpp Checkout.cpp main.cpp -o e-commerce
    ```

3.  **Run:**
    After successful compilation, run the executable:
    ```bash
    ./e-commerce
    ```

