#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enetr a and b and c";
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
        cout<<"a is largest than b and c";
    }
    else
    {
        if (b>c)
        {
            cout<<"b is largest than a and c";
        }
        else
        {
            cout<<"c is largest than a and b";
        }
    }  
}