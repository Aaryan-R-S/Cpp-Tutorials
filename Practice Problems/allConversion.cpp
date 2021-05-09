#include<iostream>
#include<string>
using namespace std;

int toDec(int n, int base){
    int answer = 0;
    int radix = 1;
    while (n>0)
    {
        int remainder = n%10;
        answer += remainder * radix;
        radix *= base;
        n /= 10;
    }
    return answer;
}

int hexToDec(string n){
    int answer = 0;
    int radix = 1;
    
    int size = n.size();
    
    for (int i = size-1; i >=0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            answer += radix*(n[i]-'0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F'){
            answer += radix*(n[i]-'A' + 10);
        }
        radix*= 16;
    }
    
    return answer;
}

int decTo(int n, int base){
    int radix = 1;
    int answer = 0;
    while (radix<=n)
    {
        radix *= base;
    }
    radix /= base;

    while (radix>0)
    {
        int last = n/radix;
        n -= last*radix;
        radix /= base;
        answer = answer*10 + last;
    }
    return answer;
}

string decToHex(int n){
    int radix = 1;
    string answer = "";

    while (radix<=n)
    {
        radix *= 16;
    }
    radix /= 16;

    while (radix>0)
    {
        int last = n/radix;
        n -= last*radix;
        radix /= 16;
        if (last<=9)
        {
            answer += to_string(last);
        }
        else{
            char c = 'A' + last - 10;
            answer.push_back(c);
        }
        
    }
    return answer;
}

int main()
{
    // int n, base;
    // cin>>n>>base;
    // int ans = toDec(n, base);
    // cout<<ans<<endl;

    // string n;
    // cin>>n;
    // int ans = hexToDec(n);
    // cout<<ans<<endl;

    // int n, base;
    // cin>>n>>base;
    // int ans = decTo(n, base);
    // cout<<ans<<endl;

    int n;
    cin>>n;
    string ans = decToHex(n);
    cout<<ans<<endl;

    return 0;
}