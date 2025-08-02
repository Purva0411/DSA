#include <iostream>
using namespace std;
int largest(int a,int b,int c)
{
    
    if(a>b && a>c){
        cout<<a<<"is greater";
    }
    if(b>c){
        cout<<b<<"is greater";
    }
    else{
        cout<<c<<"is greater";
    }
    return 0;
}

int main()
{
    int x,y,z;
    cout<<"Enter three numbers";
    cin>>x>>y>>z;
    largest(x,y,z);
}

