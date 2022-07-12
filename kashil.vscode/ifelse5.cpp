#include<iostream>
using namespace std;
int main()
{
    char  ch;
    cout<<"Enter charater : ";
    cin>>ch;
    if (ch>=65 && ch<=90)
    {
        ch=ch+32;
        cout<<"ch : "<<ch<<endl;
        cout<<"ASCII value of "<<ch<<" is : "<<(int)ch;
    }
    else
    {
        ch=ch-32;
        cout<<"ch : "<<ch<<endl;
        cout<<"ASCII value of "<<ch<<" is : "<<(int)ch;
    }
    
}