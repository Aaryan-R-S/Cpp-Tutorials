#include<iostream>
using namespace std;

/*

*
**
***
****
*****

*/

void printPattern(int n, string s){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<s;
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