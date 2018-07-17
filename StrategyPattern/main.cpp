#include "NPC/Trader/Trader.h"
#include "NPC/Hippie/Hippie.h"
#include <iostream>

int main()
{
	Trader trader;
	trader.setName("Jorge");
	Person customer;
	customer.setName("Maria");

	trader.Trade(customer);
	trader.Hit(customer);

	std::cout << std::endl;

	Hippie hippie;
	hippie.setName("Dude");

	hippie.Hello(customer);
	hippie.Trade(trader);
	hippie.Hit(customer);

	system("pause");
	return 0;
}