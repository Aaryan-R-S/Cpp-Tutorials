#include<iostream>
#include<string.h>
using namespace std;

void reverseString(char s[]){
    int len = 0;
    while(s[len]!='\0'){
        len++;
    };

    char temp;
    for (int i = 0; i < len/2; i++)
    {
        temp=s[i];
        s[i]=s[len-i-1];
        s[len-1-i]=temp;
    };
    cout<<s<<endl;
};

int main()
{
    char s1[]= "1234";
    reverseString(s1);

    char s2[]= "12345";
    reverseString(s2);
    return 0;
}