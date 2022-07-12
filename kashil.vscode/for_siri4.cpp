#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,x,n;
    cout<<"Enter Number :";
    cin>>n;
    for (i=1;i<=n;++i)
    {
        x=pow(2,i-1);
        cout<<"\t"<<x*i;
    }
    
}