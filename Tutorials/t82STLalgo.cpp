#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1 = {5,2,7,3,84,22,74,8,35,6,8};
    vector<int> :: iterator myItr = find(v1.begin(), v1.end(), 8);
    // vector<int> :: iterator myItr = find(v1.begin(), v1.end(), 9);

    if (myItr == v1.end())
    {
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Found "<<*myItr<<endl;
    }
    
    sort(v1.begin(), v1.end());  // type of sort algo to be used is selected automatically
    // sort(v1.begin(), v1.end(), greater<int>());  

    for (auto &i: v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // cout<<is_sorted(v1.begin(),v1.end())<<endl;
    cout<<is_sorted(v1.begin(),v1.end(), greater<int>())<<endl;

    vector<int> v2 = {5,2,7,3,84,22,74,8,35,6,8};

// Returns the element at nth position if the list was sorted

    // nth_element(v2.begin(), nth position, v2.end())
    
    nth_element(v2.begin(), v2.begin()+2, v2.end());
    cout<<"Third smallest elem: "<<v2[2]<<endl;

    nth_element(v2.begin(), v2.begin()+2, v2.end(), greater<int>());
    cout<<"Third largest elem: "<<v2[2]<<endl;

    return 0;
}