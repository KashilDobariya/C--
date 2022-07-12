#include<iostream>
using namespace std;
int main()
{
    int i,j,k=65,z=96;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==1)
            {
                z++;
                cout<<""<<(char)k;
                k++;
            }
            else 
            {
                z++;
                cout<<""<<(char)z;
                k++;
                
            }
        }
        cout<<"\n";
    }
}