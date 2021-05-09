#include<iostream>
using namespace std;

void pow(int n, int p){
    long long int a = 1 ;
    for (int i = 0; i < p; i++)
    {
        a *= n; 
    }
    
    cout<<n<<"^"<<p<<" = "<<a;
};

int main()
{
    cout<<"Enter n: ";
    int n;
    cin>>n;

    cout<<"Enter p: ";
    int p;
    cin>>p;

    pow(n, p);

    return 0;
}