#include "NPC/Trader/Trader.h"
#include "NPC/NPC.h"
#include <iostream>

int main()
{
	Trader trader;
	trader.setName("Jorge");
	Person customer;
	customer.setName("Maria");

	trader.Trade(customer);
	trader.Hit(customer);

	system("pause");
	return 0;
}