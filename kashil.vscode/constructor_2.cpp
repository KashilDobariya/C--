#include<iostream>
using namespace std;
class Test
{
public:
    Test(int n)     //  Parameterized Consrtuctor
    {
        cout<<"\n Constructor Called..."<<n;
    }
};
int main()
{
    Test t1(1),t2(2);
}