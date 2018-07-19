#include <iostream>
#include "love.h"
using namespace std;

int main(){
  love loveObject;
  love *lovePointer =&loveObject;

  loveObject.printCrap();
  lovePointer->printCrap();

}
