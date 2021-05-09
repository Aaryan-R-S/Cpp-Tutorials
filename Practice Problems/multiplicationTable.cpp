#include<iostream>
using namespace std;

int main()
{
    int n,s;
    cout<<"Multiplication Table : ";
    cin>>n;
    cout<<"till : ";
    cin>>s;
    for (int i = 0; i < s; i++)
    {
        printf("%d X %d = %d\n", n, i+1,(i+1)*n);
    }
    return 0;
}