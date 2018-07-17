#include "ProTrader.h"
#include "../../../../Person/Person.h"
#include "../../../NPC.h"
#include <iostream>


ProTrader::ProTrader()
{
}

void ProTrader::Trade(NPC * npc, const Person & person)
{
	std::cout << "Pro Trader " << npc->getName() << " start trading with " << person.getName() << std::endl;
}


ProTrader::~ProTrader()
{
}
