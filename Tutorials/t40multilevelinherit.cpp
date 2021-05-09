#include <iostream>
using namespace std;


class Student
{
    static int id;
protected:
    int roll;
public:
    void setData(int);
    void getData(void);
};

void Student::setData(int r){
    roll = r;
    id++;
};
void Student::getData(void){
    cout<<"Roll: "<<roll<<" & ID: "<<id<<endl;
};

int Student::id = 1000;

class Exam: public Student
{
protected:
    float maths;
    float physics;
public:
    void setMarks(float m, float p){
        maths = m ;
        physics = p ;
    };
    void getMarks(){
        cout<<"Marks : "<<endl;
        cout<<"M: "<<maths<<endl;
        cout<<"P: "<<physics<<endl;
    };
};

class Result: public Exam{
    float percent;
public:
    void getResult(){
        getData();
        getMarks();
        cout<<"Percent: "<<(maths+physics)/2<<"%"<<endl;
    };
};

int main()
{
    Result ABC;
    ABC.setData(16);
    ABC.setMarks(90.0, 95.0);
    ABC.getResult();
    return 0;
}
