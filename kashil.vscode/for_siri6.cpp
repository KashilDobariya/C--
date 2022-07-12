#include<iostream>
using namespace std;
int main()
{
    int i,n,x=0,x1=1,x2;
    cout<<"Enter Number : ";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        x2=x+x1;
        x=x1;
        x1=x2;
        cout<<"\t"<<x2;
    }
}