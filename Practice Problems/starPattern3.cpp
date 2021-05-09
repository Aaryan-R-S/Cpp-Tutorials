#include<iostream>
using namespace std;

/*

    *    
   ***
  *****
 *******
*********

*/

void printPattern(int n, string s){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2*n-1; j++)
        {
            if (n-i < j && j < n+i){
                cout<<s;
            }
            else{
                cout<<" ";
            };
        }
        cout<<endl;
    }
    
};

int main()
{
    cout<<"Enter n: ";
    int n;
    cin>>n;

    cout<<"Enter s: ";
    string s;
    cin>>s;

    printPattern(n, s);

    return 0;
}