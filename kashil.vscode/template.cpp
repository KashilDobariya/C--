#include<iostream>
using namespace std;
template <class T>
void display(T t1)
{
    cout<<"Displaying Template : "
        <<t1<<"\n";
}

template<class T1,class T2>
void display(T1 t1,T2 t2)
{
    cout<<"Displaying1 Template : "
        <<t1<<","
        <<t2<<"\n";
}

int main()
{
    display(200);
    display(12.40);
    display('K');
    display("Kashil",54);
    return 0;
}