#include<iostream>
using namespace std;

// Polymorphism of two types:
//  1. Compile Time  
//      1.1. Function Overloading
//      1.2. Operator Overloading
//  2. Run Time
//      1.1. Virtual Functions

int sum(int a){
    return a+10;
}
int sum(int a, int b){
    return a+b;
}
int sum(int a, int b, int c){
    return a+b+c;
}

//  Func overload means choose the func among those with same names calc the req func output 
int main()
{
    int a = 2, b= 4, c = 5;
    cout<<sum(a,b)<<endl;
    cout<<sum(a,b,c)<<endl;
    cout<<sum(a)<<endl;
    return 0;
}