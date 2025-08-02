#include <iostream>
using namespace std;
int numb(int n)
{
    for(int i=1;i<=n;i+=1)
    {
        cout<<i<<" ";
    }
    return 0;
}

int main()
{
    int m;
    cout<<"enter the element";
    cin>>m;
    numb(m);
}
