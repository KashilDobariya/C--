#include<iostream>
using namespace std;
class Example
{
public:
    int a,b;
    Example() {}
    Example(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    Example add(Example e1,Example e2)
    {
        Example e;
        e.a=e1.a+e2.a;
        e.b=e1.b+e2.b;
        return e;
    }
};
int main()
{
    Example e1(10,20),e2(30,40),e3;
    e3=e3.add(e1,e2);
    cout<<"e1 a"<<e1.a<<"\tb"<<e1.b;
    cout<<"\ne2 a"<<e2.a<<"\tb"<<e2.b;
    cout<<"\n\ne3 a"<<e3.a<<"\tb"<<e3.b;
    return 0;
}