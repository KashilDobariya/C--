#include<iostream>
using namespace std;
class A
{
    int pr;
public:
    int pu;
protected:
    int pro;
};

class B : public A
{
public:
    void set(int x)
    {
        pro=x;
    }
    int get()
    {
        return pro;
    }
};

int main()
{
    B obj1;
    obj1.set(10);
    cout<<"\n"<<obj1.get();
    cout<<"\n"<<obj1.pu;
}