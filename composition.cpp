//composition
#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

int main ()
{
    //a class can have objects of another classes
    Birthday birthObj(16,09,1998);

    People kevinKoech("Kevin the man", birthObj);
    kevinKoech.printInfo();
}
