#include<iostream>
using namespace std;
class Sum
{
    int x,y;
public:
    Sum()
    {
        x=10,y=20;
    }
    void dosum()
    {
        cout<<"\n No Parameter x+y : "<<x+y;
    }
    void dosum(int x,int y)
    {
        cout<<"\n With Parameter x+y : "<<x+y;
    }
    void dosum(double x,double y)
    {
        cout<<"\n Double x+y : "<<x+y;
    }
    double dosum(double x,double y,double z)
    {
        return x+y+z;
    }
};
int main()
{
    Sum letsum;
    letsum.dosum();
    letsum.dosum(5,8);
    letsum.dosum(5.5,8.9);
    cout<<"\n Double 3 parameter : "<<letsum.dosum(5.5,2.25,9.6);
    return 0;
}