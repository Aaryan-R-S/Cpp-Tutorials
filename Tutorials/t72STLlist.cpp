#include<iostream>
#include<list>

using namespace std;

// forward_list == linked list
// list == doubly linked list

void display(list<int> &l){
    list<int>::iterator itr;
    for (itr = l.begin(); itr != l.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
};
int main()
{
    list<int> l = {23,5,2456,6758,44675};
    list<int> l1;
    l1.push_back(3);
    l1.push_back(9);
    l1.push_back(7);
    l1.push_back(2);
    l1.push_back(4);
    l1.push_back(9);
    l1.push_back(1);
    l1.push_back(0);
    // display(l1);
    for(const auto &e: l1){
        cout<<e<<" ";
    } 

    cout<<endl;
    l1.pop_back();   
    l1.pop_front();   
    l1.remove(9);   
    display(l1);    

    l1.sort();
    l1.reverse();
    display(l1);    

    list<int> l2;
    l2.merge(l1);
    l2.reverse();
    display(l1);    // empty now
    display(l2);
    l2.clear();
    display(l2);

    return 0;
}