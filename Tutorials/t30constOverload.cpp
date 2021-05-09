#include<iostream>
using namespace std;

class BankDeposit{
    int principal, years;
    float rate, amount;
    public:
        void show(void);
        BankDeposit(void){};
        BankDeposit(int p, int y, int r); // r = 4%
        BankDeposit(int p, int y, float r);  // r = 0.04
};

void BankDeposit::show(void){
    cout<<endl<<"P: "<<principal<<endl<<"Y: "<<years<<endl<<"R: "<<rate<<endl<<"A: "<<amount<<endl;
};

BankDeposit::BankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    rate = r;
    amount = p;
    for (int i = 0; i < y; i++)
    {
        amount += amount * (rate);
    };
};

BankDeposit::BankDeposit(int p, int y, int r){
    principal = p;
    years = y;
    rate = float(r)/100;
    amount = p;
    for (int i = 0; i < y; i++)
    {
        amount += amount * (rate);
    };
};

int main()
{
    BankDeposit bd1, bd2;
    int p, y, ri;
    float rf;

    cout<<"For int Enter P, Y and R: "<<endl;
    cin>>p>>y>>ri;
    bd1 = BankDeposit(p,y,ri);
    bd1.show();

    cout<<"For float Enter P, Y and R: "<<endl;
    cin>>p>>y>>rf;
    bd2 = BankDeposit(p,y,rf);
    bd2.show();

    return 0;
}