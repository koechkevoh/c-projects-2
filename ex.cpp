#include <iostream>
using namespace std;

int main()
{
int a, b;
a=20; 
b=5;

cout << (a/b)<<endl;
cout << (float(a)/b)<<endl;
cout << (a/float(b))<<endl;
cout << (float(a)/float(b))<<endl;

return 0;
}
