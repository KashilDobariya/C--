#include<iostream>
#include<math.h>
using namespace std;
class Bank
{
    int cibilscore,fd;
    float emi,p,r,t,balance,afbalance,amount,withdro,deposit;
public:
    void get()
    {
        cout<<"Enter Bank Balance : "<<endl;
        cin>>amount;
        cout<<"Enter Bank Cibilscore : "<<endl;
        cin>>cibilscore;
        cout<<"Enter Your Fix Deposit : "<<endl;
        cin>>fd; 
    }
    void calculate()
    {
        cout<<"Enter Your Deposit Amount : "<<endl;
        cin>>deposit;
        if(amount >= 1000)
        {
            cout<<"Enter Withdro Amount : "<<endl;
            cin>>withdro;

            balance=amount+deposit-withdro;
            amount=balance;
        }
        else if(balance > 1000)
        {
            cout<<"\t NOTE : "<<endl;
            cout<<"Minimum Balance can not Withdro "<<endl;
        }
        else
        {
            amount=balance;
        }
        cout<<"After Withdro Balance : "<<balance<<endl;
    }
    int loan()
    {
        if(cibilscore>=4 || fd>=50000)
        {
            cout<<"Your Miximum Loan Granted is Rs.5,00,000/-"<<endl;
        }
        else
        {
            cout<<"Your FD either Cibilscore is Not Enoygh that's why your loan not granted "<<endl;
            cout<<"If you get loan so Mentain your fd and cibilscore "<<endl;
        }
    }

    int info()
    {
        cout<<"Enter Amount Of Loan :  ";
        cin>>p;
        cout<<"Enter Rate Of Loan :  ";
        cin>>r;
        cout<<"Enter Time Of Loan :  ";
        cin>>t;

        r=r/(12*100);
        t=t*12;

        emi=(p*r*pow(1+r,t))/(pow(1+r,t)-1);
    }
    int Emi()
    {

        if(balance< 9947)
        {
            cout<<"Your penalty for late is Rs.800/- ";
            cout<<"Next EMI is : "<<emi+emi+800;
        }
        else
        {
            cout<<"EMI is : "<<emi<<endl;
            balance=balance-emi;
            cout<<"After Cut EMI Main Balance is : "<<balance<<endl;
        }
    }
};
int main()
{
    int i,n=2;
    Bank b1;
    b1.get();
    b1.calculate();
    b1.loan();
    b1.info();
    b1.Emi();
}