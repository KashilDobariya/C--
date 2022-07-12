#include<iostream>
using namespace std;
class Test 
{
    public:     //access specifire
    int n;
};
int main()
{
    Test t1;
    t1.n=10;
    cout<<"n : "<<t1.n;
}