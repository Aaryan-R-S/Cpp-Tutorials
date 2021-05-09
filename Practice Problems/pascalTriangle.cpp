#include<iostream>
using namespace std;

int fac(int n){
    int p = 1;
    for (int i = 2; i <= n; i++)
    {
        p*=i;
    }
    return p;
};

int main()
{
    int n;
    cout<<"Enter num: ";
    cin>>n;

    int ans;
    for (int i = 0; i <= n; i++)
    {
        // for (int k = n-i; k>0; k--)  // optional for printing space
        // {
        //     cout<<" ";
        // }

        for (int j = 0; j <= i; j++)
        {
            // same as getting combination of (iCj) at ith and jth place
            ans = fac(i)/(fac(j)*fac(i-j));
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}