#include<iostream>
using namespace std;
int main()
{
    int i=10,x=0;
    cout<<"\n Before ";
    cout<<"\n i/x : "<<i/x;
    try
    {
        cout<<"n : "<<i/x;
    }
    catch(int n)
    {
        cout<<"n : "<<n;
    }
    cout<<"\n After ";
}