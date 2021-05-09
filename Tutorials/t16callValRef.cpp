#include<iostream>
using namespace std;


void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
}

// Call by reference using reference variable
void swapReferenceVar(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}

// Call by reference using pointers
void swapPointer(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}



int main()
{
    int a = 4, b = 2;
    cout<<a<<b<<endl;
    // swap(a, b);    // a & b will not change bcz a copy will be given to funcs
    // swapReferenceVar(a, b);    // a & b will change as refernce is used
    swapPointer(&a, &b);    // a & b will change as address is given
    cout<<a<<b<<endl;
    return 0;
}