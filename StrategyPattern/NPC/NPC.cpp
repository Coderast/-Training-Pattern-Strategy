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
	if (tradeBehavior != nullptr) 
	{
		tradeBehavior->Trade(this, person);
		return;
	}
	throw std::runtime_error("Trade Behavior is Null Pointer!");
}

void NPC::Hit(const Person & person)
{
	if (hitBehavior != nullptr) 
	{
		hitBehavior->Hit(this, person);
		return;
	}
	throw std::runtime_error("Hit Behavior is Null Pointer!");
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
