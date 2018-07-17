#pragma once

#include "../../Person/Person.h"

class ITradable
{
public:
	virtual void Trade(Person* self, const Person& person) = 0;
};