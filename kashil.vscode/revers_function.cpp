#include<iostream>
using namespace std;
int info();
int rev(int);

int info()
{
    int x;
    cout<<"Enter value of x :";
    cin>>x;

    rev(x);
}

int rev(int x)
{
    int reverse=0,r;
    while (x!=0)
    {
        r=x%10;
        reverse=reverse*10+r;
        x/=10;
    }
    cout<<"Reverse Number : "<<reverse;
}

int main()
{
    info();
}