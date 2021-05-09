#include<iostream>
using namespace std;

class Student
{
    static int count;   
    int id;
    string name;   
public:
    void set(void){
        cout<<"Enter the name : "<<endl;
        cin>>name;
        count++;
        id = count;
    }
    void display(void){
        cout<<"Id : "<<id<<" Name : "<<name<<endl;
    }
    static void getCount(void){    // static allow only static variables else error 
        cout<<"The count is "<<count<<endl;
    }
};

int Student :: count = 1000;  // this is important else error  default value - 0

int main()
{
    Student ars, harry, rohan, skillf;
    ars.set();
    ars.display();
    harry.set();
    harry.display();
    rohan.set();
    rohan.display();
    skillf.set();
    skillf.display();
    Student :: getCount();  // access the static func like this
    return 0;
}