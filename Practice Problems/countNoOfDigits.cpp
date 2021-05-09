#include<iostream>
using namespace std;

void count(int n){
    int c = 0;
    if (n==0){
        c++;
    }
    else{
        while (n!=0)
        {
            n/=10;
            c++;
        }
    }
    cout<<"The number of digits in n are "<<c;
};

int main()
{
    cout<<"Enter n: ";
    int n;
    cin>>n;

    count(n);

    return 0;
}