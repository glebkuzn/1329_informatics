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
    int a,b,v;
    cin >> b;
    cout << "[:|" ;
    cap(b);
    cout<<"|:]" << endl;
    for(v=1;v<=b;++v)
    {
    cin >> a;
    if(a>0)
    {
         cout << "[:|" ;
    cap(a);
    cout<<"|:]" << endl;
    }
    else
    {
        cout<<endl;
        }
    }
    return 0;
}
