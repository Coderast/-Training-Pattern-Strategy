#pragma once
#include "../IHitable.h"
class PeaceHit : public IHitable
{
public:
	void Hit(Person* npc, const Person& person);
};