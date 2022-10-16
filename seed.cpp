#include "seed.h"

Seed::Seed()
{
    size = 0;
    shape = "dsklafjasldk";
}

Seed::Seed(int newSize, string newShape)
{
    size = newSize;
    shape = newShape;
}

Seed::Seed(const Seed& old)
{
    size = old.size;
    shape = old.shape;
}

void Seed::setSize(int newSize)
{
    size = newSize;
}

int Seed::getSize()
{
    return size;
}

void Seed::setShape(string newShape)
{
    shape = newShape;
}

string Seed::getShape()
{
    return shape;
}

void Seed::printSeed()
{
    cout << size << endl;
    cout << shape << endl;
}