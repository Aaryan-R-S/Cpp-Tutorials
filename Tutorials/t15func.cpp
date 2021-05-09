#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

//  This is called func prototype
int add(int, int);   // without this it will give undefined add() error as it is defined later
// int add(int a, int b);   // OR
// int add(int a, b);   // WRONG

void g();
// void g(void);

int main()
{
    int num1, num2;
    cin>>num1;
    cin>>num2;
    cout<<sum(num1, num2)<<endl;
    cout<<add(num1, num2)<<endl;
    g();
    return 0;
}

int add(int a, int b){
    int c = a+b;
    return c;
}

void g(){
    cout<<"Hi";
}