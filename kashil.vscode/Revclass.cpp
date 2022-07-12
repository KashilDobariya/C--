#include<iostream>
using namespace std;
class Test
{
    int x,i;
public:
    void set_n()
    {
        cout<<"Enterv value of x : ";
        cin>>x;
    }
    int get_n()
    {
        while(x!=0)
        {
            i=x%10;
            cout<<i;
            x=x/10;
        }
    }
};
int main()
{
    Test t1;
    t1.set_n();
    t1.get_n();
}