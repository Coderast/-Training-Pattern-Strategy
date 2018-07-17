#include "Person.h"


void Person::setName(const std::string & name)
{
	this->name = name;
}

std::string Person::getName() const
{
	return this->name;
}
