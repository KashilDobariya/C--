#include<iostream>
using namespace std;
int do_square()
{
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    return n*n;
}
int main()
{
    cout<<"Square : "<<do_square();
}