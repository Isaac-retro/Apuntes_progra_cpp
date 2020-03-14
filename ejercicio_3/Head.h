#ifndef HEAD_H
#define HEAD_H
#include<iostream>

using namespace std;
class Head{
private:
    string size;
public:
    Head();
   Head(string);
    string getSize();
    void setSize(string);
};

#endif // HEAD_H
