#include<iostream>
#include<vector>
using namespace std;

//  REFER CPLUSPLUS.COM
// Vectors are called as dynamic array because they are list + array
// at(), [], front(), back(), data() 
// insert(), emplace(), push_back(), pop_back(), reserve(), swap(), erase(), clear()

void display(vector<int> &v){
    cout<<"Vectors are: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
};

int main()
{
    vector<int> vec2(4);  // length = 4
    vector<int> vec3(4,7);  // four 7's
    display(vec3);

    vector<int> vec1;  // zero len int vector
    vec1.reserve(100);  // set capacity to 1000 to prevent resizing of vector when it gets full
    // Note : it is not same as vec1(100) as pushback will push at end of vector so 0000...0000000012345.....31

    for (int i = 0; i < 32; i++)
    {
        vec1.push_back(i);
        cout<<vec1.size()<<" "<<vec1.capacity()<<endl;
    }
    display(vec1);

    vec1.pop_back();
    display(vec1);

    vector<int>:: iterator itr;
    itr = vec1.begin();
    vec1.insert(itr+1, 2, 10);
    display(vec1);

    return 0;
}