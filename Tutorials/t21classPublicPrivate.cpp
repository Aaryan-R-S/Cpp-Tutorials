#include <iostream>
using namespace std;

// Class is extension of structure
// struct have limitations -- no method(funcs), private var
// class overcome this shortcomings

class Employee
{
private:
    int a, b;

public:
    int d;
    void setData(int a, int b);
    void getData()
    {
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
        cout << "d : " << d << endl;
    }
};

void Employee :: setData(int a1, int b1)
{
    a = a1;
    b = b1;
};

int main()
{
    Employee Harry;
    Harry.d = 23;    
    // private var can only be changed by class methods while public can easily changed as in above line
    Harry.setData(54,34);
    Harry.getData();
    return 0;
}