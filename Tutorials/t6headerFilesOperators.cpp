#include<iostream>

// There are two types of header files --
// 1. System files
// 2. User defined header files  -- 
// #include "this.cpp"  // this file is in current directory

using namespace std;

int main()
{
    cout<<"Operators in C++"<<endl;

    // Assignment Operators
    int a = 3, b =4;

    // Arithmetic Operators
    cout<<"a+b is "<<a+b<<endl;
    cout<<"a-b is "<<a-b<<endl;
    cout<<"a*b is "<<a*b<<endl;
    cout<<"a/b is "<<a/b<<endl;
    cout<<"a%b is "<<a%b<<endl;
    cout<<"a++ is "<<a++<<endl;
    cout<<"a-- is "<<a--<<endl;
    cout<<"++a is "<<++a<<endl;
    cout<<"--a is "<<--a<<endl;

    // Comparison Operators
    cout<<"a==b is "<<(a==b)<<endl;
    cout<<"a!=b is "<<(a!=b)<<endl;
    cout<<"a>=b is "<<(a>=b)<<endl;
    cout<<"a<=b is "<<(a<=b)<<endl;
    cout<<"a>b is "<<(a>b)<<endl;
    cout<<"a<b is "<<(a<b)<<endl;

    // Logical Operators
    cout<<"a!=b && a<b is "<<(a!=b && a<b)<<endl;
    cout<<"a==b && a>b is "<<(a==b || a>b)<<endl;
    cout<<"not of(a==b && a>b) is "<<!(a==b || a>b)<<endl;

    return 0;
}
