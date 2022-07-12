#include<iostream>
using namespace std;
class Test
{
public:
    Test()
    {
        cout<<"\n Default Consrtuctor Called...";
    }
    Test(int n)
    {
        cout<<"\n Parameter Constructor Called..."<<n;
    }
};
int main()
{
    Test t1,t2(2),t3;
}