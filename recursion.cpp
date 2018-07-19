// recursion means a function can call itself
#include <iostream>
using namespace std;

// how to calculate factorials.
int factorial(int x){
    //base case to make a function end
    //recursion is using a function inside a function
    if (x==1){
        return 1;
    }  else{
        return x*factorial(x-1);

    }


}
int main()
{
cout <<factorial(90) <<endl;
}
