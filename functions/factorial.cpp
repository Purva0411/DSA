#include <iostream>
using namespace std;
int numb(int n,int fact)
{
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<"factorial of given no is: "<<fact;
    return 0;
}

int main()
{
    int no,f=1;
    cout<<"enter the no ";
    cin>>no;
    numb(no,f);
}