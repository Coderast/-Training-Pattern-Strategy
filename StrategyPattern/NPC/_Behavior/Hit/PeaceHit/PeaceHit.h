#pragma once
#include "../IHitable.h"
class PeaceHit : public IHitable
{
public:
	void Hit(NPC* npc, const Person& person);
};