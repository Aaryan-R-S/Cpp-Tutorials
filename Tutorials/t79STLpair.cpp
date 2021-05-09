#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<pair<int, char>> l;

    l.push_back(make_pair(13,'u'));
    // OR
    pair<int, char> p(10,'t');
    l.push_back(p);

    for(const auto &e: l){
        cout<<e.first<<" "<<e.second;
        cout<<endl;
    }

    pair<int, char> l1;
    l1.first = 3;
    l1.second = 'f';
    cout<<l1.first<<" "<<l1.second<<endl;;

    return 0;
}