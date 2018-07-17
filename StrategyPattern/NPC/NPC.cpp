#include "NPC.h"
#include <iostream>


NPC::NPC()
{
	hitBehavior = nullptr;
	tradeBehavior = nullptr;
}

void NPC::Hello(const Person & person) const
{
	std::cout << "Hello, " << person.getName() << "! My name is " << name << std::endl;
}

void NPC::Trade(const Person & person)
{
	tradeBehavior->Trade(this, person);
}

void NPC::Hit(const Person & person)
{
	hitBehavior->Hit(this, person);
}

void NPC::setHitBehavior(IHitable * hitable)
{
	if (hitBehavior != nullptr)
		delete hitBehavior;
	hitBehavior = hitable;
}

void NPC::setTradeBehavior(ITradable * tradable)
{
	if (tradeBehavior != nullptr)
		delete tradeBehavior;
	tradeBehavior = tradable;
}

NPC::~NPC()
{
	if (tradeBehavior != nullptr)
		delete tradeBehavior;
	if (hitBehavior != nullptr)
		delete hitBehavior;
}
