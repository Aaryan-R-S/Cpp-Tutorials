#include<iostream>
using namespace std;

class Items
{
    int itemId[10];
    int itemPrice[10];
private:
    int counter;    
public:
    void initCounter(void){counter=0;}
    void displayPrice(void);
    void setPrice(void);
};

void Items:: displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
     cout<<itemId[i]<<" : "<<itemPrice[i]<<endl;   
    }
}

void Items:: setPrice(void)
{
    cout<<"Enter Id : "<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price : "<<endl;
    cin>>itemPrice[counter];
    counter++;
}


int main()
{
    Items customer;
    customer.initCounter();
    customer.setPrice();
    customer.setPrice();
    customer.setPrice();
    customer.displayPrice();

    return 0;
}