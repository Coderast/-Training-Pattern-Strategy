#include "SimpleTrader.h"
#include "../../../NPC.h"
#include <iostream>

void SimpleTrader::Trade(NPC * npc, const Person & person)
{
	std::cout << "Simple dude " << npc->getName() << " trading with " << person.getName() << std::endl;
}
