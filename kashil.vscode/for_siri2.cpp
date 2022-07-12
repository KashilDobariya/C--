#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter Number";
    cin>>n;
    for (i=1;i<=n; i++)
    {
        cout<<"\t"<<i++;
        cout<<"\t"<<i*i;
    }
}