#include <iostream>

using namespace std;

int main()
{   double x,y;
    int n;
    cout << "Enter your numbers" << endl;
    cin>>x>>y;
    n=1;
    while(x<=y)
    {
      n=n+1;
      x=1.1*x;

    }
    cout<<n<<endl;
    return 0;
}
