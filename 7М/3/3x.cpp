#include <iostream>

using namespace std;

int main()
{   long n,i,a,s;
    cout << "Enter your n" << endl;
    cin >> n;
    a=1;
    s=0;
    for (i=1;i<=n;++i)
    {
        a=a*i;
        s=a+s;
    }
    cout << s+1 <<endl;
    return 0;
}
