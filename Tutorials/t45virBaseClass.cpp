#include<iostream>
using namespace std;

class Student{
    protected:
        int rollNo;
    public:
        void setRoll(int a){
            rollNo = a;
        }
        void getRoll(){
            cout<<"Roll: "<<rollNo<<endl;
        }
};

class Test: virtual public Student
{
    protected:
        float maths, physics;
    public:
        void setMarks(float m, float p){
            maths = m;
            physics = p;
        }
        void getMarks(){
            cout<<"Marks- "<<endl;
            cout<<"  Maths: "<<maths<<endl;
            cout<<"  Physics: "<<physics<<endl;
        }
};

class Sports: virtual public Student
{
    protected:
        float score;
    public:
        void setScore(float s){
            score = s;
        }
        void getScore(){
            cout<<"Score: "<<score<<endl;
        }
};

class Result: public Sports, public Test
{
    private:
        float percentage;
    public:
        void setResult(){
            percentage = (maths+physics+score)/3;
        }
        void getResult(){
            setResult();
            getRoll();
            getMarks();
            getScore();
            cout<<"Aggregate: "<<percentage<<endl;
        }
};

/*
Student --> 
    Test & Score -->
                Result
        
    Result will get confused ang give error in absence of word virtual bcz all elems of Student are inherited two times so it will be ambiguious which to take
*/

int main()
{
    Result ars;
    ars.setRoll(1001);
    ars.setMarks(98, 96);
    ars.setScore(99);
    ars.getResult();
    return 0;
}