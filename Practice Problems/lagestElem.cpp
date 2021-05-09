#include<iostream>
using namespace std;

int main()
{
    int myArr[]={23,5,7,7,0,-3,54,78,63,45};
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (myArr[i]>max){
            max = myArr[i];
        };
    }
    printf("Max val is: %d", max);
    return 0;
}