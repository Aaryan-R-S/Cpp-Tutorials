#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> s){
    cout<<s.size()<<endl;
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
};

int main()
{
    stack<int> s;

    s.push(78);
    s.push(65);
    s.push(134);
    s.push(43);

    display(s);

    return 0;
}