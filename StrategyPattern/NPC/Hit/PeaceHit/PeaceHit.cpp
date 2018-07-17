#include "PeaceHit.h"
#include <iostream>
#include "../../NPC.h"
#include "../../../Person/Person.h"

void PeaceHit::Hit(Person * npc, const Person & person)
{
	std::cout << "Peacfull dude " << npc->getName() << " can't hit cutie " << person.getName() << std::endl;
}
