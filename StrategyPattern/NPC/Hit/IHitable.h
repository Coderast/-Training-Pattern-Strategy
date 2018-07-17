#pragma once

#include "../../Person/Person.h"

class IHitable
{
public:
	virtual void Hit(Person* self, const Person& person) = 0;
};