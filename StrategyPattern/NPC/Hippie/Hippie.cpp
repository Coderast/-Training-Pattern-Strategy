#include "Hippie.h"
#include "../_Behavior/Hit/PeaceHit/PeaceHit.h"
#include "../_Behavior/Trade/SimpleTrader/SimpleTrader.h"

Hippie::Hippie()
{
	hitBehavior = new PeaceHit();
	tradeBehavior = new SimpleTrader();
}
