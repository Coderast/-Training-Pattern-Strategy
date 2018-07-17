#include "EasyHit.h"
#include "../../NPC.h"
#include "../../../Person/Person.h"
#include <iostream>

void EasyHit::Hit(Person * npc, const Person & person)
{
	std::cout << "Simple dude " << npc->getName() << " attack mr." << person.getName() << std::endl;
}
