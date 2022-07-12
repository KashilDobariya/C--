#include<iostream>
using namespace std;
int main()
{
	int a[5],i,total=0;
	for(i=1;i<=5;i++)
	{
		cout<<" Enetr a["<<i<<"] : ";
		cin>>a[i];
	}
    for(i=1;i<=5;i++)
    {
        total+=a[i];
        cout<<"\t"<<a[i];
    }
    cout<<"\n Total : "<<total;
}