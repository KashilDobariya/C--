#include<iostream>
using namespace std;
class Test
{
    int n;
public:
    void set_n(int val)
    {
        n=val;
    }
    int get_n()
    {
        return n;
    }
};
int main()
{
    Test t1;
    t1.set_n(30);
    cout<<"n : "<<t1.get_n();
}