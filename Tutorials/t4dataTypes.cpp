#include<iostream>

using namespace std;

int kk = 34;

void e(){
    int k;
    cout<<"\nkk is "<<kk;
}

int main(){
    int a = 4;
    int b = 2;
    cout<<"a+b is "<<a+b;

    float p = 3.1415;
    cout<<"\npi is "<<p;

    char s = 'a';
    cout<<"\ns is "<<s;

    bool n = true;
    cout<<"\nn is "<<n;

    cout<<"\nkk is "<<kk;
    kk= 23;
    e();
    cout<<"\nkk is "<<kk;


    return 0;
}