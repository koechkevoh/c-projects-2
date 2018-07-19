#include <iostream>
using namespace std;
 void printArray(int theArray[], int sizeOfArray);
int main (){
    int kevin[4] ={78,89,54,46};
    int brian[6]={89,23,12,90,89};
    printArray(kevin, 4);
}
   void printArray(int theArray[], int sizeOfArray){

   for(int x=0; x<sizeOfArray; x++){

    cout <<theArray[x]<<endl;
   }
   }
