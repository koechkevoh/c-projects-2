//function overloading u can build more than one function with the same name.
#include <iostream>
using namespace std;

void printNumber(int x){
    cout << "am now printing an integer " << x << endl;
}
void printNumber(float x){
    cout << "am now printing a float " << x << endl;
}
void printNumber(double x){
    cout << "am now printing a double " << x << endl;
}
int main()
{

   int a =45;
   float b =45.67676;
   double c=65677;

   printNumber(a);
   printNumber(b);
   printNumber(c);
}


