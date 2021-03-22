#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    cout << (a%1440)/60 <<" " << (a%1440)%60;
}
