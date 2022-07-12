#include<iostream>
using namespace std;
class Bank
{
    int account_no,d1,d2;
public:
    Bank();
    void deposit(int);
    void debit(int);
    void display(int);
};
    Bank::Bank()
    {
        account_no=123,d1=0,d2=0;
    }
    void Bank::deposit(int n)
    {
        if(n==account_no)
        {
            cout<<"\nEnter Deposit Money Amount : ";
            cin>>d1;
        }
        else
        {
          cout<<"Incorrect Account Number";
        }
    }
    void  Bank::debit(int n)
    {
        if(n==account_no)
        {
            cout<<"\nEnter Debit Money amount : ";
            cin>>d2;
        }
        else
        {
            cout<<"Incorrect Account Number : ";
        }
    }
    void  Bank::display(int n)
    {
        if(n==account_no)
        {
            cout<<"\n\tCurrent Balance : "<<d1-d2;
        }
        else
        {
            cout<<"Incorrect Account Number";
        }
    }
int main()
{
    
    int n,i;
    cout<<"\n Enter Account Number : ";
    cin>>n;
    Bank b[5];
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter Amount : "<<i+1<<"\n";
        b[i].deposit(n);
        b[i].debit(n);
        b[i].display(n);
    }
}