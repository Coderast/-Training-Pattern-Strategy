#pragma once
#include "../Person/Hit/IHitable.h"
#include "../Person/Trade/ITradable.h"
#include "../Person/Person.h"
#include <string>
class NPC : public Person
{
private:
	IHitable* hitBehavior;
	ITradable* tradeBehavior;
public:
	NPC();

	virtual void Hello(const Person& person) const;
	void Trade(const Person& person);
	void Hit(const Person& person);

	void setHitBehavior(IHitable *hitable);
	void setTradeBehavior(ITradable *tradable);
	~NPC();
};

