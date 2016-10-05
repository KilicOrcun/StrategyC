/*
 * Customer.c
 *
 *  Created on: 05.10.2016
 *      Author: OKilic
 */

#include "CustomerStrategy.h"
#include "Customer.h"

struct Order
{
   double amount;
   double shipping;
};

struct Customer
{
   const char* name;
   Address address;
   Order order;
   customerPriceStrategy priceStrategy;
};



void placeOrder(struct Customer* customer, struct Order* order)
{
   double totalAmount = customer->priceStrategy(order->amount, order->shipping);
}
