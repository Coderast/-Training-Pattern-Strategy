#pragma once

class Person;

class IHitable
{
public:
	virtual void Hit(Person* self, const Person& person) = 0;
};