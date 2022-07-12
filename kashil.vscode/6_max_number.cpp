

// ****** Question No.6 ****** //


#include <iostream>
using namespace std;
inline int max(int a,int b)
{
	if(a>b)
	{
        return a;
    }
	else
    {
	    return b;
    }   
}
int main()
{

    int a,b;

    cout<<"Enter First Value : ";
    cin>>a;
    
    cout<<"Enter Second Value : ";
    cin>>b;

    cout<<"\n";
    cout<<"Maximum Value is :"<<max(a,b);
}