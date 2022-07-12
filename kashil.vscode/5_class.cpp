#include<iostream>
using namespace std;

class Student
{
    int math,eng,phy,total,grade;
    float pr;
    string name;
public:
    void getdata()
    {
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Math : ";
        cin>>math;
        cout<<"Enter Eng : ";
        cin>>eng;
        cout<<"Enter Phy : ";
        cin>>phy;
    }
    void putdata()
    {
        int w=36;
        total=math+eng+phy;
        
        if(math<=35 || eng<=35 || phy<=35)
	    {
		    pr=0;
	    }
        else
        {
            pr=total*100/300;
        }
        
        cout<<"\n"<<name<<"\t"<<math<<"\t"<<eng<<"\t"<<phy<<"\t"<<total<<"\t"<<pr;

        if(pr>35 && pr<=50)
        {
            cout<<"\tC";
        }
        else if(pr>50 && pr<=75)
        {
            cout<<"\tB";
            cout<<"\t50"<<(char)w;
        }
        else if (pr>75 && pr<=100)
        {
            cout<<"\tA";
            cout<<"\t 100"<<(char)w;
        }
        else
        {
            cout<<"\tFail";
        }
    }
};
int main()
{
    int i;
    Student s[10];
    for(i=0;i<3;i++)
    {
        cout<<"\n Enter details of Student..."<<i+1<<"\n";
        s[i].getdata();
    }
    cout<<"\nName\tMath\tEng\tPhy\tTotal\tPresant\tGrade\tScolership";
    for(i=0;i<3;i++)
    {
        s[i].putdata();
    }     
}