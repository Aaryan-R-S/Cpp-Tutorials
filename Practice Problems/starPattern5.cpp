#include<iostream>
using namespace std;
/*
    *
   * *
  * * * 
 * * * *
* * * * *
* * * * *
 * * * *
  * * * 
   * *
    *
*/


void printPattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1-i; j>0 ; j--)
        {
            cout<<" ";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i = n-1; i>=0; i--)
    {
        for (int j = n-1-i; j>0 ; j--)
        {
            cout<<" ";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
};

int main()
{
    cout<<"Enter n: ";
    int n;
    cin>>n;

    printPattern(n);

    return 0;
}