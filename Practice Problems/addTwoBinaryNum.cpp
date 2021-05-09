#include<iostream>
using namespace std;

int reverse(string s){
    int ans = 0;
    int t = 0;
    for (int i = s.size()-1; i>=0; i--)
    {
        t = s[i]-'0';
        ans = ans*10 + t;
    }
    return ans;
}

int add2b(int a, int b){
    int ans = 0;
    string s = "";
    int prevCarry = 0;

    while (a>0 && b>0)
    {
        if (a%2==0 && b%2==0)
        {
            s.push_back(prevCarry==0?'0':'1');
            prevCarry = 0;
        }
       else if ( (a%2==0 && b%2==1) || (a%2==1 && b%2==0))
        {
            if (prevCarry == 1)
            {
                s.push_back('0');
                prevCarry = 1;
            }
            else
            {
                s.push_back('1');
                prevCarry = 0;
            }
        }
        else{
            s.push_back(prevCarry==0?'0':'1');
            prevCarry = 1;
        }
        a /= 10;
        b /= 10;
    }

    while (a>0)
    {
        if (prevCarry == 1)
        {
            if(a%2==1){
                s.push_back('0');
                prevCarry = 1;
            }
            else{
                s.push_back('1');
                prevCarry = 0;
            }
        }
        else
        {
            s.push_back(a%2==1?'1':'0');
            prevCarry = 0;
        }
        a /= 10;
    }

    while (b>0)
    {
        if (prevCarry == 1)
        {
            if(b%2==1){
                s.push_back('0');
                prevCarry = 1;
            }
            else{
                s.push_back('1');
                prevCarry = 0;
            }
        }
        else
        {
            s.push_back(b%2==1?'1':'0');
            prevCarry = 0;
        }
        b /= 10;
    }
    
    if (prevCarry == 1)
    {
        s.push_back('1');
    }

    ans = reverse(s);
    return ans;
}

int main()
{
    int a, b;
    cin>>a>>b;

    cout<<add2b(a, b)<<endl;
    return 0;
}