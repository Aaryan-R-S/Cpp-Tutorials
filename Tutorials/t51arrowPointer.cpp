#include<iostream>
using namespace std;

class Complex{
    int real, img;
    public:
        void set(int a, int b){
            real = a;
            img = b;
        };
        void get(){
            cout<<real<<"+"<<img<<"i"<<endl;
        };
};

int main()
{
    Complex c1;
    c1.set(2,6);
    c1.get();

    Complex *p = &c1;
    // -- or ---
    // Complex *p = new Complex;

    // (*p).set(5,3);
    // (*p).get();
    // -- or ---
    p->set(5,3);
    p->get();
    c1.get();

    int size = 2;
    Complex *myPointer = new Complex[size];

    Complex *ptrtemp = myPointer;

    for (int i = 0; i < size; i++)
    {
        int p,q;
        cin>>p>>q;
        myPointer->set(p,q);
        myPointer++;
    }

    myPointer = ptrtemp;

    for (int i = 0; i < size; i++)
    {
        myPointer->get();
        myPointer++;
    }
    
    return 0;
}