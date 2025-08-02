#include <iostream>
using namespace std;
int addition(int x,int y)
{
    int c=x+y;
    cout<<c;
    return c;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    addition(a,b);
}
