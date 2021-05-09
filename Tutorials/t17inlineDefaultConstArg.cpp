#include<iostream>
using namespace std;

inline int product(int a,  int b){    //inline is request to compiler to store the func on memory
    return a*b;
}

int product2(int a,  int b){
    static int c =0;      // imp to keep track of call of funcs
    c++;
    return a*b+c;
}

int product3(int a,  int b, int c = 3){   // default argument c is 3
    return a*b+c;
}

int product4(int a,  int b){   
    const int c = 3;
    return a*b+c;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product2(a,b)<<endl;
    cout<<product2(a,b)<<endl;
    cout<<product2(a,b)<<endl;
    cout<<product2(a,b)<<endl;
    cout<<product3(a,b)<<endl;
    cout<<product4(a,b)<<endl;
    return 0;
}