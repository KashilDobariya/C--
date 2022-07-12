#include<iostream>
using namespace std;
class Shape
{
protected:
    int width;
    int height;
public:
    virtual int getAera()=0;        //  Pure virtual Function (Abstract)
    //  fflush(stdin);
    void setwidth(int w)
    {
        width=w;
    }
    void setheight(int h)
    {
        height=h;
    }
};

class Rectangle : public Shape
{
public:
    int getAera()
    {
        return (width*height);
    }
};

class Triangle : public Shape
{
public:
    int getAera()
    {
        return (width*height)/2;
    }
};

int main()
{
    Rectangle Rec;
    Triangle Tri;
    Rec.setwidth(5);
    Rec.setheight(7);

    cout<<"Total Rectangle aera :  "<<Rec.getAera()<<endl;

    Tri.setwidth(5);
    Tri.setheight(7);

    cout<<"Total Triangle aera : "<<Tri.getAera()<<endl;

    return 0;
}