#pragma once
#include "../ITradable.h"
class SimpleTrader : public ITradable
{
public:
	void Trade(NPC* npc, const Person& person);
};