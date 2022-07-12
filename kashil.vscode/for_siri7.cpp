#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=0;i<=25;i++)
    {
        if(i%2==0)
        {
            cout<<"\t"<<(char)(i+65);
        }
        else
        {
            cout<<"\t"<<(char)(i+97);
            
        }
    }
}
