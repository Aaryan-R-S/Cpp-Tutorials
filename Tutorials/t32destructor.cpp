#include<iostream>
using namespace std;

class BankDeposit{
    int principal, years;
    float rate, amount;
    public:
        void show(void);
        BankDeposit(void){};
        // destr role is to add specific func in adddition with delete(default) obj when the scope ends
        ~BankDeposit(){        // deststructor has no params and retun val 
            cout<<"Destructor Running...."<<endl;
        };
        BankDeposit(int p, int y, int r);
};

void BankDeposit::show(void){
    cout<<"A: "<<amount<<endl;
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
    BankDeposit bd1;
    int p, y, ri;

    cout<<"For int Enter P, Y and R: "<<endl;
    cin>>p>>y>>ri;
    bd1 = BankDeposit(p,y,ri);
    bd1.show();

    {
        // destr will be called
        BankDeposit bd2;
        // destr will be called
    }

    return 0;
}