#include "Trader.h"
#include "../_Behavior/Trade/ProTrader/ProTrader.h"
#include "../_Behavior/Hit/EasyHit/EasyHit.h"


Trader::Trader()
{
	tradeBehavior = new ProTrader();
	hitBehavior = new EasyHit();
}