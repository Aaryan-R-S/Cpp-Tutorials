#include<iostream>
#include<queue>
using namespace std;

void display(queue<int> myQ){
    cout<<myQ.size()<<endl;
    while (!myQ.empty())
    {
        cout<<myQ.front()<<" ";
        myQ.pop();
    }
    
};

int main()
{
    queue<int> myQ;
    myQ.push(3);
    myQ.push(8);
    myQ.push(5);
    myQ.push(2);

    display(myQ);

    return 0;
}