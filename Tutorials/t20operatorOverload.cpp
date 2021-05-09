#include<iostream>
using namespace std;

class Complex{
    public:
    int real=0;
    int img=0;
    Complex(int r, int i){
        this->real = r;
        this->img = i;
    }
    Complex operator+(Complex &c){
        Complex n(this->real+c.real, this->img+c.img);
        return n;
    }
};

int main()
{
    Complex c1(2,4);
    Complex c2(3,5);
    Complex c3 = c1+c2;

    cout<<c3.real<<"+"<<c3.img<<"i"<<endl;

    return 0;
}