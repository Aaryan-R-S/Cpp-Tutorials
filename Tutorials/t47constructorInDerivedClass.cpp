#include<iostream>
using namespace std;

class Boss{
    public:
        int B;
        Boss(int a){
            B = a;
        };
};

class Base: virtual public Boss{
    int n;
    public:
        Base(int num, int e): Boss(e){
            n = num;
        }
        void getBase(){
            cout<<n<<endl;
        }
};

class BaseN: virtual public Boss{
    int nN;
    public:
        BaseN(int num, int e): Boss(e){
            nN = num;
        }
        void getBaseN(){
            cout<<nN<<endl;
        }
};

class Derived: public Base, public BaseN{
    int nD, nDD;
    public:
    // first base class constr are called then the derived class (if any virtual class then it will be called first)
        Derived(int a, int b, int c, int d, int e): Base(b, e), BaseN(d, e), Boss(e)
        {
            nD = a;
            nDD = c;
        }
        void getDerived(){
            cout<<nD<<" "<<nDD<<endl;
        }
};




int main()
{
    Derived k(4,5,6,7,60);
    k.getBase();
    k.getBaseN();
    k.getDerived();
    cout<<k.B<<endl;
    return 0;
}