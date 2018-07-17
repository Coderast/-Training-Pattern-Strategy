#pragma once

#include "../../Person/Person.h"
class NPC;

class IHitable
{
public:
	virtual void Hit(NPC* self, const Person& person) = 0;
};