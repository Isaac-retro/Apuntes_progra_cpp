#ifndef OWNER_H
#define OWNER_H
#include<iostream>
#include<Dog.h>
using namespace std;

class Owner {
private:
    string name;
    Dog perro;
public:
    string getName();
    void walkDog();
    Owner(string, Dog);
};

#endif // OWNER_H
