#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int row=0;row<n;row+=1)
    {
        for(int col=0;col<n-row;col+=1)
        {
            if(col==0 || col==n-row-1 || row==0)
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