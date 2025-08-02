#include <iostream>
using namespace std;
int numb(float area,float radius)
{
    area=3.14*radius*radius;
    cout<<"area of circle: "<<area;
    return 0;
    
}

int main()
{
    float a,r;
    cout<<"enter the radius of cirlcr: ";
    cin>>r;
    numb(a,r);
}
