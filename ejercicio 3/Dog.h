#ifndef DOG_H
#define DOG_H
#include<iostream>
#include<Mammal.h>
#include<Head.h>
#include<Owner.h>

using namespace std;

class Dog: public Mammal{
private:
    string name;
    Head cabeza;
public:
    Dog();
    Dog(string, string, Head);
    string getName();
    void setName(string);
    void goForWalk();
};

#endif // DOG_H
