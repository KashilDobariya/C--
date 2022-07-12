#include<iostream>
using namespace std;

class Test
{
    int n,i;
    int j=0;
public:
    void set_n()
    {
        cout<<"Enter Number : ";
        cin>>n;
    }
    int get_n()
    {
        for (i=1 ; i<n ; i++)
        {
            if (n%i==0)
            {
                j=j+i;
            }
            else
            {
                j=j;
            }
        }
        if (n==j)
        {
            cout<<"\n"<<"This number is Perfect..."<<n;
        }
        else
        {
            cout<<"\n"<<"This Number is not Perfect..."<<n;
        }
    }
};
int main()
{
    Test t1;
    t1.set_n();
    t1.get_n();
}