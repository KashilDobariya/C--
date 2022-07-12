#include<iostream>
using namespace std;
class loc
{
    int logitude,latitude;
public:
    loc () {}
    loc(int lg,int lt)
    {
        logitude=lg;
        latitude=lt;
    }
    void show()
    {
        cout<<logitude<<" ";
        cout<<latitude<<"\n";
    }
    loc operator+(loc op2);
};
loc loc::operator+(loc op2)
{
    loc temp;
    // cout<<"\n op2.logityde : "<<op2.logitude<<"\t op2.latitude : "<<op2.latitude;
    // cout<<"\n op1.logityde : "<<logitude<<"\t op1.latitude : "<<latitude;
    temp.logitude=op2.logitude+logitude;
    temp.latitude=op2.latitude+latitude;
    return temp;
}
int main()
{
    loc ob1(10,20),ob2(5,30);
    ob1.show();
    ob2.show();
    ob1=ob1+ob2;
    ob1.show();
    return 0;
}


/*
    ob1 --> lg      lt
            10      20

    ob1 --> lg      lt
            5       30

    ob1 =   ob1 +  ob2;

    ob1.lg --> 5    +   10
    ob1.lt --> 30   +   20
*/