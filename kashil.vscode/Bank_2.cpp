#include<iostream>
#include<math.h>
using namespace std;
void get();
int calculate(int);
int loan(float);
int info(float);   
int Emi(float,float);
    void get()
    {
        int amount,cibilscore,fd; 

        cout<<"Enter Bank Balance : "<<endl;
        cin>>amount;
        cout<<"Enter Bank Cibilscore : "<<endl;
        cin>>cibilscore;
        cout<<"Enter Your Fix Deposit : "<<endl;
        cin>>fd; 

        calculate(amount);
    }
    int calculate(int amount)
    {
        float deposit,withdro,balance;
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
        loan(balance);
    }
    int loan(float balance)
    {
        float cibilscore,fd;

        if(cibilscore>=4 || fd>=50000)
        {
            cout<<"Your Miximum Loan Granted is Rs.5,00,000/-"<<endl;
        }
        else
        {
            cout<<"Your FD either Cibilscore is Not Enoygh that's why your loan not granted "<<endl;
            cout<<"If you get loan so Mentain your fd and cibilscore "<<endl;
        }

        info(balance);
    }

    int info(float balance)
    {
        float p,r,t,emi;
        int i;

        cout<<"Enter Amount Of Loan :  ";
        cin>>p;
        cout<<"Enter Rate Of Loan :  ";
        cin>>r;
        cout<<"Enter Time Of Loan :  ";
        cin>>t;
        
        r=r/(12*100);
        t=t*12;
        
        emi=(p*r*pow(1+r,t))/(pow(1+r,t)-1);
        Emi(emi,balance);
    }
    int Emi(float emi,float balance)
    {

        if(balance< 9947)
        {
            cout<<"Your penalty for late is Rs.800/- ";
            cout<<"Next EMI is : "<<emi+emi+800;
        }
        else
        {
            cout<<"EMI is : "<<emi<<endl;
            cout<<"After Cut EMI Main Balance is : "<<balance<<endl;
        }
    }

int main()
{    
    get();
}