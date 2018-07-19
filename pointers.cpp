//pointers
#include <iostream>
using namespace std;

int main (){

    int fish =5;
    cout<<&fish<<endl;//&address operator

    //pointer contain memory address
    int*fishPointer;
    fishPointer = &fish;

    cout <<fishPointer<<endl;
}
