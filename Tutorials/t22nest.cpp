#include<iostream>
using namespace std;

class Binary{
    string s;   // by default class var are private
    public :
        void read(void);
        void onesCompl(void);
    private:
        void chk_bin(void);
};

int main()
{
    Binary B;
    B.read();
    B.onesCompl();
    return 0;
}


void Binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
    chk_bin();
}

void Binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Not a Binary Number!!!"<<endl;
            exit(0);
        };
    };
    cout<<"Yes it's a Binary Number!"<<endl;
};

void Binary :: onesCompl(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        };
    };
    cout<<"The one's Complement of given Binary Number is "<<s<<endl;
};


