#include<iostream>
#include<array>
using namespace std;

// Like basic array
// Prefer vector over it
// at(), [], front(), back()

int main()
{
    array<int, 10> l;
    l = {1,4,7,9,2,3,5,8,6};
    cout<<l.size()<<endl;
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    cout<<l.at(3)<<endl;
    cout<<l[8]<<endl;
    return 0;
}