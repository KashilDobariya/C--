#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"\n Base 1 ";
    }
};
class B
{
public:
    B()
    {
        cout<<"\n Base 2 ";
    }
};
class C 
{
public:
    C()
    {
        cout<<"\n Base 3 ";
    }
};
class D : public A,public B,public C
{
public:
    D()
    {
        cout<<"\n Derived ";
    }
};

int main()
{
    D d;
}