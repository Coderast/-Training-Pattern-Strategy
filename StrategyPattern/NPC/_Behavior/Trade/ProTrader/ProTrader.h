#pragma once
#include "../ITradable.h"
class ProTrader : public ITradable
{
public:
	ProTrader();
	void Trade(NPC* npc, const Person& person);
	~ProTrader();
};

