#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int *p = &a;
    cout<<*p<<endl;

    // OR

    float *k = new float(4.34);
    cout<<k<<endl;
    cout<<*k<<endl;

    // OR

    int *ar = new int[3];
    ar[0]=10;
    *(ar+1)=15;
    ar[2]=20;

    // delete operator
    delete ar;
    // OR
    delete[] ar;

    cout<<ar[1]<<endl;


    return 0;
}