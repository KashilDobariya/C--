#include<iostream>
using namespace std;
class Test
{
    int x,y;
public:
    Test(int n, int m)          //  Parameterized Constructor
    {
        x=n;
        y=m;
        cout<<"\n Constructor Called..."<<"x : "<<x<<"\ty : "<<y;
    }
    ~Test()                     //  Destructor
    {
        cout<<"\n Constructor Called..."<<"x : "<<x<<"\ty : "<<y;
    }
};
int main()
{
    Test t1(1,11),t2(2,22);
}