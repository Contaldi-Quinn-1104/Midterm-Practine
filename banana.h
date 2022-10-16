#ifndef BANANA_H
#define BANANA_H
#include "fruit.h"
class Banana: public Fruit
{
    protected:
        bool peel;
    public:
        Banana();
        Banana(string, int, Seed, bool);
        Banana(const Banana&);
        bool getPeel();
        void setPeel(bool);
        void printBanana();
};
#endif