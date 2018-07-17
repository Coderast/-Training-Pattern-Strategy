#include "Trader.h"
#include "../Trade/ProTrader/ProTrader.h"
#include "../Hit/EasyHit/EasyHit.h"


Trader::Trader()
{
	tradeBehavior = new ProTrader();
	hitBehavior = new EasyHit();
}