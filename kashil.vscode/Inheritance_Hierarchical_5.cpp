#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"\n Base 1";
    }
};
class B : public A
{

};

class C : public A
{

};

int main()
{
    B b;
    C c;
}