#include<iostream>
using namespace std;
class Employee
{
    int income;
    float hra,da,gs;
public:
    void salary()
    {
        cout<<"\nEnter Salary : ";
        cin>>income;
    }
    void Hra()
    {
        if(income<=5000)
        {
            hra=income*8/100;
            cout<<"House Rent Allowance : "<<hra;
            da=income*20/100;
            cout<<"\nDearness allowance : "<<da;
        }
        else if(income>5000 && income<=10000)
        {
            hra=income*12/100;
            cout<<"House Rent Allowance : "<<hra;
            da=income*30/100;
            cout<<"\nDearness allowance : "<<da;
        }
        else if(income>10000 && income<=15000)
        {
            hra=income*15/100;
            cout<<"House Rent Allowance : "<<hra;
            da=income*40/100;
            cout<<"\nDearness allowance : "<<da;
        }
        else if(income>15000)
        {
            hra=income*20/100;
            cout<<"House Rent Allowance : "<<hra;
            da=income*50/100;
            cout<<"\nDearness allowance : "<<da;
        }
    }
    void GS()
    {
        gs=income+hra+da;
        cout<<"\nThe Gross Salary of Employee : "<<gs;
    }
};
int main()
{
    Employee e1;
    e1.salary();
    e1.Hra();
    e1.GS();
}