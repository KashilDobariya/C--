#include<iostream>
using namespace std;
int main()
{
    int i,j;
    char k='A';
    for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {
            cout<<""<<(char)(k+j-1);
        }
        cout<<"\n";
    }
}