#include <iostream>
using namespace std;

int kevin (int x){
    if (x==1){
        return 1;
    }else {
        return x*kevin(x-6);
    }
}
int main()
{
    cout << kevin(9)<<"\n";

}

