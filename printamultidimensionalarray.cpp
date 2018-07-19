#include <iostream>
using namespace std;

int main (){

 int cv[2][3]={{1,3,7},{3,5,9}};

 for(int row=0;row<2;row++){
    for(int column=0;column<3;column++){
       cout<<cv[row][column]<<" ";

    }
    cout <<endl;
 }

}

