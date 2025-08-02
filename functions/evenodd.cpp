#include <iostream>
using namespace std;
int numb(int a)
{
       if(a%2==0){
          cout<<"given no is even";
       }
       else{
           cout<<"given no is odd";
       }
    return 0;
}

int main()
{
    int n;
    cout<<"enter the no ";
    cin>>n;
    numb(n);
}