#include<iostream>
using namespace std;

template <class T1 = int, class T2 = float>
class myClass{
    public:
        T1 data1;
        T2 data2;
        
        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        };
        void display(){
            cout<<this->data1<<" & "<<this->data2<<endl;
        }
};


int main()
{
    myClass<int, string> c1(242," M\nINIWFiwiwcms34r2 ");
    c1.display();

    myClass<> c2(242, 425.5);
    c2.display();

    return 0;
}