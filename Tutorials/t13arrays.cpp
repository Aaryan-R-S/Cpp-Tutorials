#include<iostream>
using namespace std;

int main()
{
    // ARRAYS 

    int marks[4]= {23,45,75,67};

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    marks[3] = 97;
    cout<<marks[3]<<endl;


    for(int i=0; i<4;i++){
        cout<<marks[i]<<endl;
    }

    cout<<" "<<endl;
    cout<<marks<<endl;   // Address of the block
    cout<<" "<<endl;

    // Pointers and Arrays
    int* p = marks;    // & is not used for arrays as it already points at it
    cout<<*(p)<<endl;
    p++;
    cout<<*(p++)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(p++)<<endl;

    return 0;
}