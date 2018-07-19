#include <iostream>
 using namespace std;

char getgrade(float avg){

	if (avg>=70){
		char grade;
		grade='A';
		return grade;
	}
	else{
		int x=avg/10;
		char grade;
		switch(x)
		{
			case 6:
				grade='B';
				break;
            case 5:
                grade='C';
                break;
            case 4:
                grade='D';
                break;
            default:
                grade='F';
                cout <<"Seriously Mr. Okemwa did you teach this guys.\n";
                break;
		}
		return grade;
	}

}
float totalavg=0;
float cavg;

int main() {
cout <<"enter number of students.\n";
 int numstd;
cin >>numstd;

    int y=numstd;
    for( y=1; y<=numstd; y++){

     string student;
     cout <<"enter the student name."<<endl;
     cin >>student;

	cout<<"enter marks of english for "<<student<<"."<<endl;
	int eng;
	int mat;
	int kis;

	cin>>eng;
	cout<<"enter the marks of kisw for "<<student<<"."<<endl;
	cin>>kis;
	cout<<"enter the marks of maths for "<<student<<"."<<endl;
	cin>>mat;

	int sum;
	float avg;
	sum=eng+kis+mat;
	avg=sum/3;
	totalavg=totalavg + avg;
	cavg=totalavg/numstd;


	cout<<"the average marks for "<<student <<" "<<"is "<<" "<<avg<<"."<<"\n";
	char grade;
	grade=getgrade(avg);
	cout<<"the grade for "<<student<<" "<<"is "<<grade<<"."<<endl;
	cout <<"class avg is "<<cavg<<"."<<endl;
   }

	return 0;
}
