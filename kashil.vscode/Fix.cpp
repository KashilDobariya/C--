#include<iostream>
#include<math.h>
using namespace std;
void getdata();
int calculate(float,float,float);

void getdata()
{
    float number,p,r,n;

    cout<<"Enter FD number : " ;
    cin>>number;

    cout<<"Enter Amount of FD : " ;
    cin>>p;

    cout<<"Enter Rate of Amount : " ;
    cin>>r;

    cout<<"Enter Time in Month of FD : " ;
    cin>>n;

    calculate(p,r,n);
}

int calculate(float p,float r,float n)
{
    float i,tm;

    r=r/(12*100);

    i=p*r*n;
    cout<<"The Intrest amount is : "<<i<<endl;
    
    tm=p+i;
    cout<<"The Maturity Amount is : "<<tm<<endl;
}

int main()
{
    getdata();
}