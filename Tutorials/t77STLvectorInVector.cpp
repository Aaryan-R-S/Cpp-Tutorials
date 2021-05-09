#include<iostream>
#include<vector>
using namespace std;

/*
        1
    2       3
  4   5   6    8
*/

int main()
{
    vector<vector<int>> myTree;
    int edge, n1 ,n2;

    cin>>edge;
    myTree.resize(edge);  // 6

    /*
        6
        1 2
        1 3
        2 4
        2 5
        3 6
        3 8
    */
   
    for (int i = 0; i < edge; i++)
    {
        cin>>n1>>n2;
        myTree[n1].push_back(n2);
    }

    for (const auto &i : myTree)
    {
        for (const auto &j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
        

    return 0;
}