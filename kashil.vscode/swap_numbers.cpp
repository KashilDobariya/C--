

// *******  Question No.2 ****** //


#include<iostream>
using namespace std;
void getdata();
void Swap();

int temp,a,b;
void getdata()
{
    cout<<"Enter First Number : ";
    cin>>a;

    cout<<"Enter Seconde Number : ";
    cin>>b;
}

void Swap()
{
    temp=a;
    a=b;
    b=temp;

    cout<<"\n";
    cout<<"****** Swap Number is ******";
    cout<<"\n a : "<<a;
    cout<<"\n b : "<<b;
}

int main()
{
    getdata();
    Swap();
}
