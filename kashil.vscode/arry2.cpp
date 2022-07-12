#include<iostream>
using namespace std;
int main()
{
	int a[5][5],i,j,total=0;
	for(i=1;i<=3;i++)
	{
        for(j=1;j<=3;j++)
        {
		    cout<<" Enetr a["<<i<<"]a["<<j<<"]: ";
		    cin>>a[i][j];
        }
	}
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            total+=a[i][j];
            cout<<"\t"<<a[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n Total : "<<total;
}