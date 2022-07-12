#include<iostream>
using namespace std;
int main()
{
    int math,eng,eco,stat;
    float total,avg,per;
    
    cout<<"Enter marks of Maths : ";
    cin>>math;
    cout<<"Enter marks of English : ";
    cin>>eng;
    cout<<"Enter marks of Economics : ";
    cin>>eco;
    cout<<"Enter marks of Statcis : ";
    cin>>stat;

    total=math+eng+eco+stat;
    avg=total/4;
    per=(total/400)*100;

    cout<<"\nmath\teng\teco\tstat\ttotal\tavg\tper";
    cout<<"\n"<<math<<"\t"<<eng<<"\t"<<eco<<"\t"<<stat<<"\t"<<total<<"\t"<<avg<<"\t"<<per;
}