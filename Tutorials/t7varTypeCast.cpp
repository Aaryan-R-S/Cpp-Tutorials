#include<iostream>
using namespace std;

int c = 23;

int main()
{
    int num = 3,c;
    c = num*2;
    cout<<"Local c is "<<c<<endl;
    cout<<"Global c is "<<::c<<endl;

    float d = 23.4;    // float d = 23.4F;
    long double e = 23.4;   //long double e = 23.4L;

    cout<<sizeof(34.4)<<endl;       //double
    cout<<sizeof(34.4f)<<endl;      //float
    cout<<sizeof(34.4F)<<endl;      //float
    cout<<sizeof(34.4l)<<endl;       //long double
    cout<<sizeof(34.4L)<<endl;       //long double
    
    // Reference variables
    float x = 343;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    // Type Cast
    int k = 23;
    cout<<float(k)<<endl;   // cout<<(float)k<<endl;
    float l = 2.7;
    cout<<int(l)<<endl;

    return 0;
}