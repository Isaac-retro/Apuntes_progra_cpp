#include <iostream>
#include<Dog.h>
#include<Owner.h>

using namespace std;

int main()
{
    Head h("grande");
    Dog perro("Boby","can",h);
    Owner tu("yo",perro);
   tu.goForWalk;
    return 0;
}
