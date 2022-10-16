#include "fruit.h"

Fruit::Fruit()
{
    color = "Null";
    numSeeds = 1;
}
Fruit::Fruit(string newColor, int newnumSeeds, Seed newSeedType)
{
    color = newColor;
    numSeeds = newnumSeeds;
    seedType = newSeedType;
}

Fruit::Fruit(const Fruit& old)
{
    color = old.color;
    numSeeds = old.numSeeds;
    seedType = old.seedType;
}

string Fruit::getColor()
{
    return color;
}

void Fruit::setColor(string newColor)
{
    color = newColor;
}

int Fruit::getNumSeeds()
{
    return numSeeds;
}
void Fruit::setNumSeeds(int newNumSeeds)
{
    numSeeds = newNumSeeds;
}

Seed Fruit::getSeedType()
{
    return seedType;
}

void Fruit::setSeedType(Seed newSeedType)
{
    seedType = newSeedType;
}

void Fruit::printFruit()
{
    cout << color << " " << numSeeds << endl;
}
