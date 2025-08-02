#include <iostream>
using namespace std;
int numb(int n){
    if(n>=85 && n<100)
    {
        cout<<"A Grade";
    }
    else if(n>=65 && n<85)
    {
        cout<<"B Grade";
    }
    else if(n>=45 && n<65)
    {
        cout<<"C Grade";
    }
    else if(n>=35 && n<45)
    {
        cout<<"D Grade";
    }
    else{
        cout<<"fail";
    }
    return 0;
}
int main(){
    int m;
    cout<<"enter the marks";
    cin>>m;
    numb(m);
}