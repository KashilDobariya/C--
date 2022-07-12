#include<iostream>
using namespace std;
int do_square(int n)
{
    cout<<" Square : "<<n*n;
}
int main()
{
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    do_square(n);
}