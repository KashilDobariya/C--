#include<iostream>
using namespace std;
int info();
int pnumber(int);

int info()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    pnumber(n);
}
int pnumber(int n)
{
    int i,j=0;
    
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            j=j+i;
        }
        else
        {
            j=j;
        }
    }
    if(n==j)
    {
        cout<<"\n"<<"This is perfect Number :";
    }
    else
    {
        cout<<"\n"<<"This is not perfect Number :";
    }
}

int main()
{
    info();   
}