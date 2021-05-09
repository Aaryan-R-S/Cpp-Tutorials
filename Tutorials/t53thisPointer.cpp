#include<iostream>
using namespace std;

class Complex{
    int real, img;
    public:
        // void set(int real, int img){
        //     this->real = real; // without this Error as names are same
        //     this->img = img;
        // };
        // OR
        Complex set(int real, int img){
            this->real = real; // without this Error as names are same
            this->img = img;
            return *this;
        };
        void get(){
            cout<<real<<"+"<<img<<"i"<<endl;
        };
};

int main()
{
    Complex c1;
    c1.set(2,6).get(); // bcz this is returned as Complex so we can use else error
   
    return 0;
}