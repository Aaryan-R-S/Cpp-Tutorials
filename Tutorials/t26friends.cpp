#include <iostream>
using namespace std;

class C
{
    int a, b;

public:
    void set(int x, int y){
        a = x;
        b = y;
    }
    void print(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    friend int sumComplex(C p, C q);  // to make a outside func a friend but not a method like c.sumComplex() which is wrong
};

int sumComplex(C p, C q){
    int a = p.a + q.a; 
    int b = p.b + q.b; 
    C newq;
    newq.set(a,b);
    newq.print();
    return 0;
}


int main()
{
    C asdf, asdfg;
    asdf.set(1, 4);
    asdf.print();
    asdfg.set(5, 8);
    asdfg.print();
    sumComplex(asdf, asdfg);
    return 0;
}