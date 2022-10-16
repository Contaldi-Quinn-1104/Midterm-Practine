#ifndef SEED_H
#define SEED_H
#include <iostream>
#include <string>
using namespace std;
class Seed
{
    protected:
        int size;
        string shape;
    public:
        Seed();
        Seed(int, string);
        Seed(const Seed&);
        void setSize(int);
        int getSize();
        void setShape(string);
        string getShape();
        void printSeed();
};
#endif