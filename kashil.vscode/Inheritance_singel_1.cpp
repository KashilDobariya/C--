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

int main()
{
    B b;
}