#include<iostream>
using namespace std;
class Loc
{
    int longitude,latitude;
public:
    Loc () {}
    Loc(int lg,int lt)
    {
        longitude=lg;
        latitude=lt;
    }
    void show()
    {
        cout<<"\n"<<longitude<<" ";
        cout<<latitude<<"\n";
    }
    friend Loc operator-(Loc op1,Loc op2);
};
Loc operator-(Loc op1,Loc op2)
{
    Loc temp;
    temp.longitude=op1.longitude-op2.longitude;
    temp.latitude=op1.latitude-op2.latitude;
    return temp;
}
int main()
{
    Loc ob1(30,30),ob2(10,20);
    ob1.show();
    ob2.show();
    ob1=ob1-ob2;
    ob1.show();
    return 0;
}
