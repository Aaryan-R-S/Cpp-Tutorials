#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    const int a = 34;
    cout<<a<<endl;

    // Manipulators -- endl,setw() 
    int b=3535, c=541;
    cout<<setw(3)<<a<<endl;
    cout<<setw(3)<<b<<endl;
    cout<<setw(3)<<c<<endl;

    // Operators Precedence
    cout<<a*2+2+4<<endl;
    cout<<2*2*2;

    return 0;
}
