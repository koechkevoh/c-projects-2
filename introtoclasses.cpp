#include <iostream>
using namespace  std;
//to create a class make sure you are outside main.
class KevinClass{//making a class is like declaring a class
public://access specifier
    void coolSaying(){
    cout <<"cool saying"<<endl;

    }


};

int main (){
   //object is how to access stuff in your class
   KevinClass kevinObject;
   kevinObject.coolSaying();
return 0;
}
