#include "House.h"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    int a;
    int *p = &a;
    p = new int;
    strcpy((char*)p,"Hel");
    cout<<*((char*)p)<<endl;
    House house;
    house.b = 7;
    Villa villa;
   
    villa.b = 8;
    villa.privateGarden();
}
