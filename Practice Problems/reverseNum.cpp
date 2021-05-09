#include<iostream>
using namespace std;

void reverse(int n){
    int remainder = 0, reverse = 0;
    while (n!= 0){
        remainder = n%10;
        reverse = reverse*10+remainder;
        n /= 10;
    };
    cout<<"Reverse num is "<<reverse;
};

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    reverse(n);

    return 0;
}