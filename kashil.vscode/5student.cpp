#include<iostream>
using namespace std;
int main()
{
    int std[5],math[5],phy[5],eng[5],i,pr[5],total[5],w=36;
    char str[10][10];
    for(i=1;i<=5;i++)
    {
        cout<<"Student no :"<<i;

        cout<<"\n Enter Name : ";
        cin>>str[i];

        cout<<"\t Maths Mark : ";
        cin>>math[i];

        cout<<"\t Phy Mark : ";
        cin>>phy[i];

        cout<<"\t English Mark : ";
        cin>>eng[i];
    }
    cout<<"std No.\tName\tMath\tPhy\tEng\tTotal\tPersant\tGrade\tScolership";
     for(i=1;i<=5;i++)
     {
         cout<<"\n"<<i<<"\t"<<str[i]<<"\t"<<math[i]<<"\t"<<phy[i]<<"\t"<<eng[i];
        if(math[i]<=35 || eng[i]<=35 || phy[i]<=35)
	    {
		    pr[i]=0;
	    }
	    else
	    {
            total[i]=math[i]+eng[i]+phy[i];
            cout<<"\t"<<total[i];

            pr[i]=total[i]*100/300;
            cout<<"\t"<<pr[i];
	    }
        if(pr[i]>35 && pr[i]<=50)
		{
		    cout<<"\tC";
		}
		else if(pr[i]>50 && pr[i]<=75)
		{
		    cout<<"\tB";
		}
		else if(pr[i]>75 && pr[i]<=100)
		{
			cout<<"\tA";
			cout<<"\t 100"<<(char)w;
		}
		else
		{
			cout<<"\tFail";
		}
		cout<<"\t";
     }
}