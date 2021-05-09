#include<iostream>
using namespace std;

void decToBin(int n){
    int i = 0;
    int arr[10];
    while(n != 0){
        arr[i]=n%2;
        n = n/2;
        i++;
    }
    for (int j = i-1; j >= 0; j--)
    {
        cout<<arr[j];
    }
    
};

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    decToBin(n);

    return 0;
}