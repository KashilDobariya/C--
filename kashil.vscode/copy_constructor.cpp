#include<iostream>
using namespace std;
class Point
{
    int x,y;
public:
    Point(int x1,int y1)
    {
        x=x1;
        y=y1;
    }
    Point(const Point &p2)
    {
        x=p2.x;
        y=p2.y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
};
int main()
{
    Point obpoint1(10,20);
    Point obpoint2=obpoint1;
    cout<<"obpoint1.x : "<<obpoint1.getx()<<"\tobpoint1.y : "<<obpoint1.gety();
    cout<<"\nobpoint2.x : "<<obpoint2.getx()<<"\tobpoint2.y : "<<obpoint2.gety();
    return 0;
}