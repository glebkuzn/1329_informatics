#include <iostream>
using namespace std;
void cap(int a)
{
    int i;
    for(i=1;i<=a;++i)
    {
        cout << "|";
    }
}
int main()
{
    int a;
    cin >> a;
    cout << "[:|" ;
    cap(a);
    cout<<"|:]" << endl;
    return 0;
}
