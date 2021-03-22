#include <iostream>

using namespace std;

int main()
{   int a,b,c;
    cout <<"Enter 3 numbers" <<endl;
    cin >>a>>b>>c;
    if ((a>=b)&&(a>=c)) {
    cout <<a;
    }
    if ((c>=b)&&(c>=a)) {
    cout <<c;
    }
    if ((b>=a)&&(b>=c)) {
    cout <<b;
    }
    return 0;
}
