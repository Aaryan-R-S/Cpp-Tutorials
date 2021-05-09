#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
    // Function objects are also called functor
    int arr[] = {45,56,3,2,6,9,4};
    sort(arr, arr+5);  // sort ascending till 5th elem
    sort(arr, arr+5, greater<int> ());  // sort descending till 5th elem
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}