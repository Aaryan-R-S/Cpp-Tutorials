#include <iostream>
using namespace std;

//  -------------- STRUCTURE --------------------- Use all methods
struct Employee
{
    int ID;
    char favChar;
    float salary;
};

//------------- Shortcut ---------------
typedef struct Worker
{
    int ID;
    char favChar;
    float salary;
} W;

//  -------------- UNION ---------------------  Use only one method
union Money
{
    int ID;
    char favChar;
    float salary;
};

int main()
{
    // ------------------- 1 -----------
    // struct Employee harry;
    // harry.ID = 1;
    // harry.favChar = 'c';
    // harry.salary = 1200000;
    // cout<<harry.ID<<endl;
    // cout<<harry.favChar<<endl;
    // cout<<harry.salary<<endl;

    // ------------------- 2 -----------
    // W skillf;
    // skillf.ID = 1;
    // skillf.favChar = 'f';
    // skillf.salary = 520000;
    // cout<<skillf.ID<<endl;
    // cout<<skillf.favChar<<endl;
    // cout<<skillf.salary<<endl;

    // ------------------- 3 -----------
    // union Money harry;   // Use any one params
    // harry.ID = 1;      // garbage
    // harry.favChar = 'c';     // garbage
    // harry.salary = 1200000;     // valid
    // cout<<harry.ID<<endl;
    // cout<<harry.favChar<<endl;
    // cout<<harry.salary<<endl;

    // ------------------- 4 ----------- Assign words an integer value starting from 0..
    enum Food
    {
        roti,
        sabzi,
        pani
    };
    cout << roti << endl;
    cout << sabzi << endl;
    cout << pani << endl;
    Food k = sabzi;
    cout << k << endl;
    if (2 == pani)
    {
        cout << "Yes" << endl;
    }

    return 0;
};