#include<iostream>
#include<math.h>
using namespace std;

class Complex{
    int a, b;
    public:
        Complex(void){   // default constructor
            a = 1;
            b = 2;
        }
        Complex(int x, int y = 3){  // dynamic parameterized constructor with a default value for b
            a = x;
            b = y;
        }
        void print(){
            cout<<a<<"+"<<b<<"i"<<endl;
        }
        friend float dist(Complex e, Complex f);
};

float dist(Complex e, Complex f){
    float t = sqrt(pow(e.a-f.a, 2) + pow(e.b-f.b, 2) * 1.0);
    return t; 
}


int main()
{
    Complex p, q;
    p.print();
    q.print();

    Complex x(3,4), y(6,5);
    x.print();
    y.print();

    Complex t = Complex(9,8);
    t.print();

    cout<<dist(x,y);

    return 0;
}