#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int row=0;row<n;row+=1)
    {
        for(int col=0;col<=row;col+=1)
        {
            cout<<col+1;
        }
       for(int i=row-1;i>=0;i--)
        {
            cout<<i+1;
        }
         cout<<endl;
    }
   
    return 0;
}