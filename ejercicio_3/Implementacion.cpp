#include<Mammal.h>
#include<Dog.h>
#include<iostream>
#include<Owner.h>
#include<Head.h>

using namespace std;

///////mammal//////////////////////////////////////////////////
string Mammal::getType(){
    return type;
};
void Mammal::setType(string type){
    this->type=type;
};




///dog/////////////////////////////////////////////////////////////
string Dog::getName(){
    return name;
};
void Dog::setName(string name){
    this->name = name;
};
Dog::Dog(string name, string type, Head cabeza) : Mammal(type) {
    this->name = name;
    this->cabeza = cabeza;
};
void Dog::goForWalk(){
  cout<<"Yo soy el perro:" + name ;
};


///head/////////////////////////////////////////
string Head::getSize(){
    return size;
};
void Head::setSize(string size){
    this->size = size;
};

///owner////////////////////////////////////////
Owner::Owner(string name, Dog perro){
    this->name=name;
    this->perro=perro;
};

string Owner::getName(){
    return name;
};
void Owner::walkDog(){
    cout<<"el duenio "<< name << " esta paciando al perro "<<endl;
    perro.goForWalk();
};

