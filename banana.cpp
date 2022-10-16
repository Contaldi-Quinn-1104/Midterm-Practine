#include "banana.h"

Banana::Banana()
{
    peel = 0;
}
Banana::Banana(string newColor, int newNumSeeds, Seed newSeedType, bool newPeel)
{
    color = newColor;
    numSeeds = newNumSeeds;
    seedType = newSeedType;
    peel = newPeel;
}
Banana::Banana(const Banana& old)
{
    peel = old.peel;
}
bool Banana::getPeel()
{
    return peel;
}
void Banana::setPeel(bool newPeel)
{
    peel = newPeel;
}

void Banana::printBanana()
{
    cout << peel;
}