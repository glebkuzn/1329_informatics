#include <iostream>
using namespace std;
int main()
{
    int a;
    cout <<"Enter the number of the year"<<endl;
    cin >>a;
    if (((a%4==0)&&(a%100!=0))||(a%400==0))
    {
        cout <<"Da";
    }
    else
    {
        cout <<"No";
    }
    return 0;
}
