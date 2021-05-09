#include<iostream>
using namespace std;

string isPrime(int num){
    string result = "True";
    if (num==0 || num==1){
        result ="False";
    }
    else{
        for (int i = 2; i<num^(1/2) && result=="True"; i++)
        {
            if (num%i == 0){
                result = "False";
            };
        }
    }
    return result;
};

void primeRange(int num1, int num2){
    for (int i = num1; i<num2+1; i++)
    {
        string k = isPrime(i);
        if (k == "True"){
            cout<<i<<" ";
        };
    }
};

int main()
{
    int n1, n2;
    cout<<"Enter n1: ";
    cin>>n1;
    cout<<"Enter n2: ";
    cin>>n2;
    primeRange(n1,n2);
    return 0;
}