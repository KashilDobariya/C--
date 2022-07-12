#include<iostream>
using namespace std;
class Bank
{
    int amount,balance,withdro,deposit;
public:
    void get()
    {
        cout<<"Enter Bank Balance : "<<endl;
        cin>>amount;
    }
    void calculate()
    {
        cout<<"Enetr Depoit Amount : ";
        cin>>deposit;
        
        if(amount>=1000)
        {
            cout<<"Enter Withdro Amount : "<<endl;
            cin>>withdro;

            balance=deposit+amount-withdro;
            amount=balance;
        }
        else if(balance<1000)
        {
            cout<<"\t NOTE : ";
            cout<<"Minimun Balance Not Withdro..."<<endl;
        }
        else
        {
            amount=balance;
        }
        cout<<"After Withdro Balance : "<<balance<<endl;
    }
};
int main()
{
    int i,n=5;
    Bank b1;
    b1.get();
    for (i = 0; i < n; i++)
    {
        b1.calculate();
    } 
}