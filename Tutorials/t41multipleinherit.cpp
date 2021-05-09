#include <iostream>
using namespace std;


class Student
{
    static int id;
protected:
    int roll;
public:
    int n = 0; 
    void say(){
        cout<<"0"<<endl;
    };
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

class Exam
{
protected:
    float maths;
    float physics;
public:
    int n = 1; 
    void say(){
        cout<<"1"<<endl;
    };
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

class Result: public Student, public Exam{
    float percent;
public:
    void getResult(){
        getData();
        getMarks();
        cout<<"Percent: "<<(maths+physics)/2<<"%"<<endl;
    };
    void say(){
        Student::say();
        // OR 
        // Exam::say();
    };
    Student::n ;  
    // OR 
    // Exam::n; 
};

int main()
{
    Result ABC;
    ABC.setData(16);
    ABC.setMarks(90.0, 95.0);
    ABC.getResult();

    // these are some ambiguities
    ABC.say();
    cout<<ABC.n<<endl;    
    // so mention it using ::

    return 0;
}
