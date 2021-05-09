#include <iostream>
using namespace std;

class Student
{
    int id;
    int grade;

public:
    void set(void)
    {
        grade = 20;
        cout << "Enter Id " << endl;
        cin >> id;
        cout << "Enter Grade " << endl;
        cin >> grade;
    }
    void get(void)
    {
        cout << "Details : " << id << endl;
        cout << "Details : " << grade << endl;
    }
};

class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2){
        a = v1;
        b = v2;
    }
    void setDataBySum(complex c1, complex c2){
        a = c1.a + c2.a ;
        b = c1.b + c2.b ;
    }
    void print(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }

};



int main()
{
    Student s[4];
    for (int i = 0; i < 4; i++)
    {
        s[i].set();
        s[i].get();
    }

    complex c1, c2, c3;
    c1.setData(1,2);
    c1.print();
    c2.setData(3,4);
    c2.print();
    c3.setDataBySum(c1,c2);
    c3.print();

    return 0;
}