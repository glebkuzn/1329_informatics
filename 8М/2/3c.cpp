#include <iostream>
#include <cmath>
using namespace std;
void size(int stack[])
{
    cout << stack[0];
}
void push(int stack[], int element)
{
    int i,a;
    stack [0]=element;
    for(i=1;i<=element;++i)
    {
        cin >> stack [i];
    }
    for (a=0;a<=i-1;++a)
    {
        cout << stack[a] << " ";
    }
}
int main()
{
    int element,a;
    cin >> element;
    int stack[element];
    push (stack,element);
    size(stack);
    return 0;
}
