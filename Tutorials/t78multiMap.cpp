#include<iostream>
#include<map>
using namespace std;

int main()
{
    multimap<string,int, less<string>> marksMap;  
    marksMap.insert({{"Kerg",245},{"Wsdfr", 56},{"Mest", 97},{"Kerg",205},{"Loar", 79},{"Pidsa", 87}});
    marksMap.insert(make_pair("Hi", 42));

    map<string,int> :: iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    
    for(const auto &e: marksMap){
        if(e.first=="Kerg"){
            cout<<e.first<<" "<<e.second<<endl;
        }
    }
    
    return 0;
}