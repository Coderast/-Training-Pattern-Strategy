#pragma once
#include "../IHitable.h"
class EasyHit : public IHitable
{
public:
	void Hit(NPC* npc, const Person& person);
};