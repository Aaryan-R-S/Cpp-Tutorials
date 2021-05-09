#include<iostream>
using namespace std;

/*
    1    
   222
  33333
 4444444
555555555
*/
void printPattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            if (n-1-i <= j && j <= n-1+i){
                cout<<i+1;
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

    printPattern(n);

    return 0;
}