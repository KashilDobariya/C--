

// ****** Question No.7 ****** //


#include <iostream>
using namespace std;
 
int sum(int x, int y, int z =0 , int w=0)
{
    return (x + y + z + w);
}

int main()
{
    int x,y,z,w;

    cout<<"Enter X value : ";
    cin>>x;

    cout<<"Enter y value : ";
    cin>>y;
    
    cout<<"Enter z value : ";
    cin>>z;
    
    cout<<"Enter w value : ";
    cin>>w;

    cout << sum(x, y) << endl;
 
    cout << sum(x, y, z) << endl;

    cout << sum(x, y, z, w) << endl;
    return 0;
}