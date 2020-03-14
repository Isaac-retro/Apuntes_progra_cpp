#ifndef MAMMAL_H
#define MAMMAL_H
#include<iostream>

using namespace std;
class Mammal{
private:
    string type;
public:
    Mammal();
    Mammal(string);
    string getType();
    void setType(string);
};
#endif // MAMMAL_H
