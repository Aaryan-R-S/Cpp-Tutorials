#include<iostream>
#include<set>
#include<string>
using namespace std;

// no duplicate values
// sorted by default
// order of sorting can also be given
// logathmic complexity as it works on special type of tree

int main()
{
    set<int> s1 = {1,9,7,4,5,6,3,2,4,5,6,5};
    for (const auto&e: s1)
    {
        cout<<e<<" ";
    }
    cout<<endl;

    return 0;
}