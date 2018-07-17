#pragma once

class Person;

class ITradable
{
public:
	virtual void Trade(Person* self, const Person& person) = 0;
};