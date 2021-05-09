#include<iostream>
using namespace std;

class Base{
    public:
        int a = 0;
};
class Derived:public Base{
    public:
        int a = 1;
};

int main()
{
    Base a;   
    Derived b;   

    Base *p = &b;
    // pointer of base class pointing to derived class 
    cout<<p->a<<endl;
    cout<<(*p).a<<endl;
    // so func will run for base not of derived class

    // Derived *p1 = &a;  // converse is not valid error

    return 0;
}