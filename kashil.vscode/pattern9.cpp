#include<iostream>
using namespace std;
int main()
{
    int i,j,k='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<""<<(char)k++;
        }
        cout<<"\n";
    }
}