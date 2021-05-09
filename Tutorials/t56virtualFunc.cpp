#include<iostream>
using namespace std;

class Base{
    public:
        int a = 0;
        // void am(){
        //     cout<<a<<endl;    // gives 0
        // };
        virtual void am(){
            cout<<a<<endl;      // gives 1 as run Derived func
        };
};
class Derived:public Base{
    public:
        int a = 1;
        void am(){
            cout<<a<<endl;
        };
};

int main()
{
    Base a;   
    Derived b;   

    Base *p = &b;
    // with virtual derived funcs will run
    p->am();

    return 0;
}