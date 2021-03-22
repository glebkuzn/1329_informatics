#include <iostream>
using namespace std;
int main()
{
    int x;
    cout <<"Enter your number"<<endl;
    cin >>x;
    if (x>0)
    {
        cout <<"1";
    }
    if (x<0)
    {
        cout <<"-1";
    }
    if (x==0)
    {
        cout <<"0";
    }
    return 0;
}
