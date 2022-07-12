

// ****** Question No.4 ****** //


#include<iostream>
using namespace std;
void getdata();
int calculate(int ,int,int,int);

void getdata()
{
    int i,p,r,n;
    cout<<" Enter principal of Amount : ";
    cin>>p;

    cout<<"Enter rate of Interst : ";
    cin>>r;

    cout<<"Enter time of Interst : ";
    cin>>n;

    calculate(i,p,r,n);
}

int calculate(int i,int p,int r,int n)
{
    i=(p*r*n)/100;

    cout<<"simpal intrest :"<<i;
}

int main()
{
    getdata();
}