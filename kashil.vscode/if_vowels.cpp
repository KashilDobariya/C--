#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enetr Alphabat :";
    cin>>ch;
    cout<<"ASCII value of "<<ch<<" is : "<<(int)ch;
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        cout<<"\n "<<ch <<" This Alphabt is vowels";
    }
    else
    {
        cout<<"\n "<<ch <<" This Alphabat is consonant";
    }
}
