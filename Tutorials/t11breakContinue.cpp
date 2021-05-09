#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 11; i++)
    {
        if (i==2){
            continue;
        }   
        if (i==5){
            break;
        }   
        cout<<i<<endl;
    }
    return 0;
}