#pragma once
#include "../ITradable.h"
class ProTrader : public ITradable
{
public:
	ProTrader();
	void Trade(Person* npc, const Person& person);
	~ProTrader();
};

