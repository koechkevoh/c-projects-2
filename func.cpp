#include <iostream>
using namespace std;

float average(int num1,int num2);

int main()
{
int num1,num2;
float y;

cout << "Enter number"<<endl;
cin >>num1;

cout << "Enter another number"<<endl;
cin >>num2;
y=average (num1,num2);

cout <<"average is "<< y <<endl;

}

float average( int num1, int num2){

	float avg;
	avg =(num1 + num2)/2.0;
return avg;

}
