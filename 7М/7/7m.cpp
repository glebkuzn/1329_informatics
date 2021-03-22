 #include <iostream>
 #include <math.h>
using namespace std;
void inputArray(int X[],int Y[],int n)
{
    int i;
    for(i=0;i<n;++i)
    {
       do
       {
         cin>>X[i]>>Y[i];
         if((X[i]<1)||(X[i]>8)||(Y[i]<1)||(Y[i]>8))
         {
           cout<<"Error"<<endl;
         }
       }
       while((X[i]<1)||(X[i]>8)||(Y[i]<1)||(Y[i]>8));
    }
}
bool Biet(int x1,int y1,int x2,int y2)
{
    return ((x1==x2)||(y1==y2)||(fabs(y1-y2)==fabs(x1-x2)));
}
int main()
{
    int n;
    int i,j;
    cout << "Enter your array" << endl;
    n=8;
    int X[n],Y[n];
    inputArray(X,Y,n);
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
              if (Biet(X[i],Y[i],X[j],Y[j]))
              {
                  cout<<"YES"<<endl;
                  return 0;
              }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
