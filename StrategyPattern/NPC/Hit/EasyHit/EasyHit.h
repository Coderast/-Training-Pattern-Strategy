#pragma once
#include "../IHitable.h"
class EasyHit : public IHitable
{
public:
	void Hit(Person* npc, const Person& person);
};