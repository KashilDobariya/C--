#include<iostream>
using namespace std;
int do_square(int n)
{
    return n*n;
}
int main()
{
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    cout<<"Square : "<<do_square(n);
}