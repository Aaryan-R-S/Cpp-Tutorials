#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    map<string,int, less<string>> marksMap;  
    // map<string,int, greater<string>> marksMap;  
    marksMap["Pidsa"] = 87;
    marksMap["Loar"] = 79;
    marksMap["Mest"] = 97;
    marksMap.insert({{"Kerg",245},{"Wsdfr", 56}});

    map<string,int> :: iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    // OR

    map<string, vector<int>, greater<string>> map2;

    map2["j"].push_back(87);
    map2["z"].push_back(28);
    map2["z"].push_back(23);
    map2["a"].push_back(93);
    map2["a"].push_back(63);
    for (const auto &e: map2)
    {
        cout<<e.first<<" "<<endl;
        for (const auto &e1: e.second)
        {
            cout<<e1<<" ";
        }
        cout<<endl;   
    }
    
    return 0;
}