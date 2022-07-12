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
        cout<<longitude<<" ";
        cout<<latitude<<"\n";
    }
    Loc operator*(Loc op2);
};
Loc Loc::operator*(Loc op2)
{
    Loc temp;
    temp.longitude=op2.longitude*longitude;
    temp.latitude=op2.latitude*latitude;
    return temp;
}
int main()
{
    Loc ob1(10,20),ob2(5,3);
    ob1.show();
    ob2.show();
    ob1=ob1*ob2;
    ob1.show();
    return 0;
}