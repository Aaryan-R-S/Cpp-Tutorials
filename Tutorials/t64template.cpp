#include<iostream>
using namespace std;

template <class temp>
class Vector{
    public:
        temp *arr;
        int size;
        Vector(int m){
            size = m;
            arr = new temp[size];
        };
        temp dotProduct(Vector &v){
            temp d = 0;
            for (int i = 0; i < size; i++)
            {
                d+= this->arr[i]*v.arr[i];
            }
            return d;  
        };
        void display();
};

template <class temp>
void Vector<temp>:: display(){
    cout<<"Using scope resolution"<<endl;
};

int main()
{

    // Vector<int> v1(3);
    // v1.arr[0]=1;
    // v1.arr[1]=2;
    // v1.arr[2]=2;

    // Vector<int> v2(3);
    // v2.arr[0]=6;
    // v2.arr[1]=3;
    // v2.arr[2]=5;

    // int ans1 = v1.dotProduct(v2);
    // cout<<ans1<<endl;
    
    // int ans2 = v2.dotProduct(v1);
    // cout<<ans2<<endl;
    
    Vector<float> v1(3);
    v1.arr[0]=1.2;
    v1.arr[1]=2.0;
    v1.arr[2]=2.8;

    Vector<float> v2(3);
    v2.arr[0]=6.2;
    v2.arr[1]=3.0;
    v2.arr[2]=5.8;

    float ans1 = v1.dotProduct(v2);
    cout<<ans1<<endl;
    
    float ans2 = v2.dotProduct(v1);
    cout<<ans2<<endl;

    v1.display();

    return 0;
}