#include<iostream>
using namespace std;

template <class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2;
    return avg;
};

template <class T>
void swapNum(T &x, T &y){
    T temp = x;
    x = y;
    y = temp;
};

int main()
{
    float a;
    a = funcAverage<int, float>(4,5.0);
    printf("The average is %.2f\n", a);

    char x ='d', y ='#';
    swapNum<char>(x,y);
    cout<<x<<"\n"<<y;
    return 0;
}