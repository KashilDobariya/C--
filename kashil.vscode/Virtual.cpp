#include<iostream>
using namespace std;
class Base
{
public:
    virtual void display()
    {
        cout<<"Base class is invoked "<<endl;
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout<<"Derived class is invoked "<<endl;
    }
};

int main()
{
    Base *p,b;
    Derived d;
    p=&b;           // base
    p->display();   // -->
    p=&d;           // Derived
    p->display();
}