//pass by reference with pointers
#include <iostream>
using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main (){
    //pass by value
    int love =13;
    int bff =13;

     passByValue(love);
     passByReference(&bff);

    cout<<"love is "<<love<<endl;
    cout<<"bff is "<<bff<<endl;

}
void passByValue(int x){
     x=99;
}
void passByReference(int *x){
     *x=66;
}

