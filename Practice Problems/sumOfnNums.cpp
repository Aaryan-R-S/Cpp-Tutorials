#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter num: ";
    int n, ans;
    cin>>n;
    ans=n*(n+1)/2;
    printf("Sum of first n natural numbers is: %d",ans);
    return 0;
}