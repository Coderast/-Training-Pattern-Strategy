#pragma once
#include "Hit/IHitable.h"
#include "Trade/ITradable.h"
#include "../Person/Person.h"
#include <string>
class NPC : public Person
{
protected:
	IHitable* hitBehavior;
	ITradable* tradeBehavior;
public:
	NPC();

	virtual void Hello(const Person& person) const;
	void Trade(const Person& person);
	void Hit(const Person& person);

	void setHitBehavior(IHitable *hitable);
	void setTradeBehavior(ITradable *tradable);
	virtual ~NPC();
};

