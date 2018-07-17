#pragma once

#include "../../Person/Person.h"
class NPC;

class ITradable
{
public:
	virtual void Trade(NPC* self, const Person& person) = 0;
};