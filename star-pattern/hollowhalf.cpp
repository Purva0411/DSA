#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int row=0;row<n;row+=1)
    {
        for(int col=0;col<=row;col+=1)
        {
            if(col==0 || col==row || row==n-1)
            {
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
         cout<<endl;
    }
   
    return 0;
}