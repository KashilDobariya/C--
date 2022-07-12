#include<iostream>
using namespace std;
void showchoice();
float add(float,float);
float subtract(float,float);
float multiply(float,float);
float divide(float,float);

void showchoice()
{
    cout<<"\nMenu"<<endl;
    cout<<"1. Add"<<endl;
    cout<<"2.Subtract"<<endl;
    cout<<"3.Multiply"<<endl;
    cout<<"4.Divide"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<"Enter your choice : ";
}
float add(float a,float b)
{
    return a+b;
}
float subract(float a,float b)
{
    return a-b;
}
float multiply(float a,float b)
{
    return a*b;
}
float divide(float a,float b)
{
    return a/b;
}

int main()
{
    float x,y;
    int choice;
    do
    {
        showchoice();
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter two Number : "<<endl;
            cin>>x>>y;
            cout<<"Sum = "<<add(x,y);
            break;
        case 2:
            cout<<"Enter two Number : "<<endl;
            cin>>x>>y;
            cout<<"Diffrence = "<<subract(x,y);
            break;
        case 3:
            cout<<"Enter two Number : "<<endl;
            cin>>x>>y;
            cout<<"Multiply = "<<multiply(x,y);
            break;
        case 4:
            cout<<"Enter two Number : "<<endl;
            cin>>x>>y;
            cout<<"Divide = "<<divide(x,y);
            break;
        case 5:
            break;
        default:
            cout<<" Invalid Input "<<endl;
        }
    }while(choice!=5);
    return 0;
}