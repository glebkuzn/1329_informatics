#include <iostream>

using namespace std;

int main()
{   int a,b,c;
    cout << "Enter your number <100 "<<endl;
    cin >>a;
    b=a%10;
    c=a/10;
    if (c==1) {
        cout <<"Ha luru naceTc9 "<<a<<" KoPoB";
    }
    else {
        if (b==1)
        {
            cout <<"Ha luru naceTc9 "<<a<<" KoPoBa";
        }
        else
        {
            if ((b==0)||(b==5)||(b==6)||(b==7)||(b==8)||(b==9))
            {
                cout <<"Ha luru naceTc9 "<<a<<" KoPoB";
            }
            else
            {
                cout <<"Ha luru naceTc9 "<<a<<" KoPoBbI";
            }
        }
    }

    return 0;
}

