#include<iostream>
using namespace std;
class Base
{
    int x=10;
public:
    virtual void fun()=0;
    int getx()
    {
        return x;
    }
};
class Derived : public Base
{
    int y;
public:
    void fun()
    {
        cout<<"Kashil";
    }
};

int main()
{
    Derived d;
    d.getx();
    d.fun();
    return 0;
}