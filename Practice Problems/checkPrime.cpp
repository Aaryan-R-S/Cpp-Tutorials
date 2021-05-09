#include<iostream>
using namespace std;

string isPrime(int num){
    string result = "True";
    for (int i = 2; i<num^(1/2) && result=="True"; i++)
    {
        if (num%i == 0){
            result = "False";
        };
    }
    return result;
};

int main()
{
    int num;
    cout<<"Enter num: ";
    cin>>num;
    cout<<isPrime(num);
    return 0;
}