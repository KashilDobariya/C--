#include<iostream>
using namespace std;
int main()
{
    int unit,amount;
    cout<<"Enter Number of Units";
    cin>>unit;
    if (unit<=100)
    {
        amount=50+(unit*0.6);
    }
    else if (unit>100 && unit<=300)
    {
       amount=110+(unit-100)*0.8;
    }
    else
    {
        amount=270+(unit-300)*0.9;
    }
    if (amount)
    {
        amount=amount*1.15;
    }
    cout<<"amount :"<<amount;
}