#include<iostream>
#include<string.h>
using namespace std;
class airline
{
public:
    char passport[20];
    char name[20];
    char destination[20];
    char email[20];
    char from[20];
    char time[20];
    int amount;
    char x,A;
    void deatils();
    void display();
};

void airline::deatils()
{
    cout<<"\nEnter Your Passport Number : ";
    cin>>passport;
    cout<<"\nEnter Name : ";
    cin>>name;
    cout<<"\nEnter Flight Take off Place : ";
    cin>>from;
    cout<<"\nEnter Flight of Destination Place :";
    cin>>destination;
    cout<<"\nEnter E-mail Address : ";
    cin>>email;
    cout<<"\nEnter Flight Time : ";
    cin>>time;
    cout<<"\nEnter Flight Amount : ";
    cin>>amount;
    cout<<"\nEnter Flight Availability (A (Available) / N (Not Available)) : ";
    cin>>x;
}

void airline::display()
{
    cout<<"\nPassport Number : "<<passport<<endl;
    cout<<"\nName : "<<name<<endl;
    cout<<"\nFlight take of Place : "<<from<<endl;
    cout<<"\nFlight Destination Place : "<<destination<<endl;
    cout<<"\nE-mail Address : "<<email<<endl;
    cout<<"\nFlight Tinme : "<<time<<endl;
    cout<<"\nFlight Amount : "<<amount<<endl;
    if(x==A)
    {
        cout<<"\nYour Ticket is sucessfully Booked ";
    }
    else
    {
        cout<<"\nYour Ticket is not Booked ";
    }
}
void Menu()
{
    cout<<"\n1.Reservation ";
    cout<<"\n2.deatils ";
    cout<<"\n3.Exit";
}
int main()
{
    int choice;
    do
    {
        airline a;
        cout<<"\n\n\t\t *******************************************************************";
	    cout<<"\n\t\t                   welcome to Airline system                   ";
	    cout<<"\n\t\t *******************************************************************";
        cout<<"\n\t                           Flight Reservation  Menu                                 ";
        cout<<"\n\t\t *******************************************************************";
        Menu();
        cout<<"\nEnter Your Choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                a.deatils();
                break;
            case 2:
                a.display();
                break;
            case 3:
                break;
            default:
                cout<<"Invalid Number ";
        }
    }while(choice!=3);
}