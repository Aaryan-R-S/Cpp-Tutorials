#include <iostream>
using namespace std;


class Base
{
    int data1;
protected:
    int p = 34;
public:
    int data2;
    void setData(void){
        data1 = 1;
        data2 = 2;
    };
    int getData1(){
        return data1;
    };
    int getData2(){
        return data2;
    };
};

// 1. Private variable of base class cannot be inherited 
// but protected and public can be inherited (see below points)

// 2. class Derived: Base  
// ******Same as of private

// 3. class Derived: private Base 
// ******Public elem & Protected elem of base class becomes private elem of derived class

// 4. class Derived: public Base 
// ******Public elem & Protected elem of base class retains their identity

// 5. class Derived: protected Base 
// ******Public elem & Protected elem of base class becomes protected elem of derived class

class Derived: public Base
{
    int data3;
public:
    int data4;
    void process(){
        data3 = data2*getData1();
        data4 = data3*getData1();
    };
    void display(){
        cout<<"1 : "<<getData1()<<endl;
        cout<<"2 : "<<data2<<endl;
        cout<<"3 : "<<data3<<endl;
        cout<<"4 : "<<data4<<endl;
    };
    
};


int main()
{
    Derived d;
    d.setData();
    d.process();
    d.display();
    return 0;
}
