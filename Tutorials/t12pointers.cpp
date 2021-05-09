#include<iostream>
using namespace std;

int main()
{
    // Pointers are data types which hold the address of the other data types
    int a = 3;
    int* b = &a;   // * indicates the pointer 

    // & == (Address of) operator 
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * == (Value at) Derefernce operator 
    cout<<"The value at address b or value of a is "<<*b<<endl;

    //  Pointer to Pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c or value of b is "<<*c<<endl;
    cout<<"The value at address b or value of a is "<<**c<<endl;

    return 0;
}