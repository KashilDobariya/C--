

// ****** Question No.5 ****** // 


#include<iostream>
#include<math.h>
using namespace std;

class Cube
{
public:
    float x;
    void getdata();
    void putdata();
};
inline void Cube::getdata()
{
    cout<<"Enter Value of x : ";
    cin>>x;
}

inline void Cube::putdata()
{
    cout<<" X Cube is : "<<pow(x,3)<<endl;
}

int main()
{
    Cube c;
    c.getdata();
    c.putdata();
}