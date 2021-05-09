#include<iostream>
using namespace std;

void fac(int n){
    long long int p = 1.0;
    for (int i = 2; i <= n; i++)
    {
        p *=i;
    }
    cout<<"Fac of "<<n<<" is "<<p;
};

int main()
{
    int n;
    cout<<"Enter num: ";
    cin>>n;

    fac(n);

    return 0;
}