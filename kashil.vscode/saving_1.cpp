#include <iostream>
#include <math.h>
using namespace std;

class saving
{
public:
    void showmenu()
    {
        cout << "********** MENU **********" << endl;
        cout << "1. Check balance" << endl;
        cout << "2. Check cibilscore" << endl;
        cout << "3. Check fixdeposit" << endl;
        cout << "4. Deposite" << endl;
        cout << "5. withdraw" << endl;
        cout << "6. Fixdeposit" <<endl;
        cout << "7. Fixdeposit Interst" <<endl;
        cout << "8. Loan" << endl;
        cout << "9. Loan conditions" << endl;
        cout << "10. Emi" << endl;
        cout << "11. Emi conditions" << endl;
        cout << "12. Next Emi" << endl;
        cout << "13. Exit" << endl;
        cout << "***************************" << endl;
    }
};

int main()
{
    saving s1;

    int option,number;
    float balance = 1000;
    float depositamount;
    float withdraw;
    float fixdeposit=0;
    float fdamount,fdrate=6.5,fdtime=5, fdinterst,ma;
    float cibil = 5, score = 0.25;

    do
    {
        s1.showmenu();
        cout << "Option :";
        cin >> option;

        system("cls");

        switch (option)
        {
        case 1:
            cout << "balance is :" << balance << "$" << endl;
            break;

        case 2:
            cout << "Cibilscore is:" << cibil << "points" << endl;
            break;

        case 3:
            cout << "fixdeposite amount is:" << fixdeposit << "$" << endl;
            break;

        case 4:
            cout << "Deposit amount:";
            cin >> depositamount;
            if (depositamount >= 10)
            {
                cibil += score;
            }
            balance += depositamount;
            cout << "balance is :" << balance << "$" << endl;
            cout << "Cibilscore is:" << cibil << "points" << endl;
            break;

        case 5:
            cout << "Withdraw amount :";
            cin >> withdraw;
            if (balance <= 1000)
            {
                cout << "Sorry sir, required minimum balance" << endl;
            }
            else if (withdraw <= balance)
            {
                balance -= withdraw;
            }
            cout << "balance is :" << balance << "$" << endl;
            cout << "Cibilscore is:" << cibil << "points" << endl;
            break;

        case 6:
            cout << "Enter Fixdeposit Number : " ;
            cin >> number;
            cout << "Enter Fixdeposit Amount : " ;
            cin >> fdamount;
            
            cout << "****** FD INTERST AND RULES ******" << endl;
            cout << "Fixdeposit Rate per is 6.5% " << endl;
            cout << "Fixdeposit Time in year is 5 years " << endl;
            cout << "Your fdintesrt and Maturity amount want to know than press 7 " << endl;
            break;

        case 7:
            cout << "****** FD INTESRT ******" << endl;
            fdtime = fdtime*12;
            fdrate = fdrate/(12*100);

            fdinterst = fdamount*fdrate*fdtime;
            cout << "The Fixdeposit interst is : "<< fdinterst << endl;
            ma= fdinterst+fdamount; 
            cout << "Your Total Maturity Amount is : " <<ma << endl;
            break;

        case 8:
            if (cibil >= 4 && fdamount >= 50000)
            {
                cout << "Your loan granted for 5,00,000 $" << endl;
                cout << "Plese check your loan contdition  press 9" << endl;
            }
            else
            {
                cout << "Your Cibil score have to minimun 4 and Fixdeposit is 5,00,000/-" << endl;
                cout << "Plese check your cibilscore press 2" << endl;
                cout << "Plese check your fd press 3" << endl;
            }
            break;

        case 9:
            cout << "Loan amount is 5,00,000$" << endl;
            cout << "Your anual intrest rate : 7.2" << endl;
            cout << "Your loan approve for 5 year" << endl;
            cout << "Plese check your first emi press 10" << endl;
            break;

        case 10:
            float p, r, n, emi;
            p = 500000;
            r = 7.2 / (12 * 100);
            n = 5 * 12;

            emi = (p * r * pow(1 + r, n)) / (pow(1 + r, n) - 1);

            cout << " Your emi ammount :" << emi << endl;
            cout << "Check your emi conditions press 11" << endl;
            break;

        case 11:
            cout << "Your every emi amount is same as your first emi" << endl;
            cout << "If you missed any emi your penalty is 800$ " << endl;
            cout << "If you missed emi than your next emi = missed emi + next emi + penalty (800$)" << endl;
            cout << "So,plese maintan requre balance " << endl;
            cout << "Check your next emi press 12" << endl;
            break;

        case 12:
            if (balance <= emi)
            {
                cout << "Not , requre balance" << endl;
                cout << "Your next emi amount is :" << (emi * 2) + 800 << endl;
            }
            else if (balance >= emi)
            {
                cout << "Emi amount :" << emi << endl;
                balance -= emi;
                cout << "After cut emi balance is :" << balance << "$" << endl;
                cout << "Cibilscore is:" << cibil << "points" << endl;
            }
        }
    } while (option != 13);
}