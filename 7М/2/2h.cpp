#include <iostream>

using namespace std;

int main()
{  int a;
    cout <<"Enter the number of the year"<<endl;
    cin >>a;
    if (((a%4==0)&&(a%100!=0))||(a%400==0)) {
    cout <<"366 DHeu";
    }
    else {
    cout <<"365 DHeu";
    }
    return 0;
}
