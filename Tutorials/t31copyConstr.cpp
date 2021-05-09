#include<iostream>
using namespace std;

class BankDeposit{
    int principal, years;
    float rate, amount;
    public:
        void show(void);
        BankDeposit(void){};
        BankDeposit(BankDeposit &bd){  // copy constructor is default created by compiler if not present 
            principal =  bd.principal;
            years =  bd.years;
            rate =  bd.rate;
            amount =  bd.amount;
            cout<<"Copy Constructor Running...."<<endl;
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
    BankDeposit bd1, bd2, bd3;
    int p, y, ri;

    cout<<"For int Enter P, Y and R: "<<endl;
    cin>>p>>y>>ri;
    bd1 = BankDeposit(p,y,ri);
    bd1.show();

    bd2 = BankDeposit(bd1);   // copy constr will run
    bd2.show();

    bd3 = bd1;   // copy constr will not run
    bd3.show();

    BankDeposit bd4 = bd1;   // copy constr will run
    bd4.show();

    return 0;
}