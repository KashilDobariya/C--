#include<iostream>
using namespace std;
class Test
{
    int x,y;
public:
    void getdata()
    {
        cout<<"\nEnter X : ";
        cin>>x;
        
        cout<<"Enter Y : ";
        cin>>y;
    }
    int putdata()
    {
        cout<<"\n X : "<<x;
        
        cout<<"\n Y : "<<y;
    }
};
int main()
{
    Test t1,t2;
    t1.getdata();
    t1.putdata();
    t2.getdata();
    t2.putdata();
}