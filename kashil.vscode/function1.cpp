#include<iostream>
using namespace std;
int getdata();
int calculate(string,int,int,int);
int result(int,int,string,int,int,int);

int getdata()
{
    int math,eng,phy;
    string name;
        
    cout<<"Enter Name :";
    cin>>name;

    cout<<"Enter Math : ";
    cin>>math;
    
    cout<<"Enter Eng : ";
    cin>>eng;
    
    cout<<"Enter Phy : ";
    cin>>phy;

    calculate(name,math,eng,phy);
}
int calculate(string ch,int a,int b,int c)
{
    int total=0,pr;
    total=a+b+c;
    pr=total*100/300;

    result(total,pr,ch,a,b,c);   
}
int result(int x,int y,string ch,int a,int b,int c)
{
    //int w=36;
    cout<<"Name\tMath\tEng\tPhy\tTotal\tPersant\tGrade\tScolership";
    cout<<"\n"<<ch<<"\t"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<x<<"\t"<<y;

    // cout<<"Total : "<<x;
    // cout<<"\nPersantage : "<<y;

    if(y>35 && y<=50)
	{
	    cout<<"\tC";
	}
	else if(y>50 && y<=75)
	{
        cout<<"\tB";
	}
	else if(y>75 && y<=100)
	{
		cout<<"\tA";
	}
	else
	{
		cout<<"\tFail";
	}
		cout<<"\t";
}
int main()
{
    getdata();   
}