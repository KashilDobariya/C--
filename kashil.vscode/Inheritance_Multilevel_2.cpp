#include<iostream>
using namespace std;
class A 
{
public:     //parent / base

    A()
    {
        cout<<"\n A ";
    }
};

class B:public A  //chid / drevied  
{
public:
    B()
    {
        cout<<"\n B ";
    }
};

class C:public B
{
public:
    C()
    {
        cout<<"\n C ";
    }
};

int main()
{
    C C;
}