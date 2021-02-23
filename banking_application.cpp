
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

class Bank
{
    char name[20];
    long int accountNo;
    char accountType[20];
    int balance;

public:
    void opbal(void);
    void deposit(void);
    void withdraw(void);
    void display(void);
};

void Bank ::opbal(void)
{
    cout << endl
         << endl;
    cout << "Enter Name :-";
    cin >> name;
    cout << "Enter A/c no. :-";
    cin >> accountNo;
    cout << "Enter A/c Type :-";
    cin >> accountType;
    cout << "Enter Opening Balance:-";
    cin >> balance;
}

void Bank ::deposit(void)
{
    cout << "Enter Deposit amount :-";
    int deposit = 0;
    cin >> deposit;
    deposit = deposit + balance;
    cout << "\nDeposit Balance = " << deposit;
    balance = deposit;
}

void Bank ::withdraw(void)
{
    int withdraw;
    cout << "\nBalance Amount = " << balance;
    cout << "\nEnter Withdraw Amount :-";
    cin >> withdraw;
    balance = balance - withdraw;
    cout << "\nAfter Withdraw Balance is " << balance << endl;
}

void Bank ::display(void)
{
    cout << "\n\n\n";
    cout << "<<<===== ACCOUNT DETAILS =====>>>" << endl;
    cout << "Name:\t\t" << name << endl;
    cout << "A/c. No:\t" << accountNo << endl;
    cout << "A/c Type:\t" << accountType << endl;
    cout << "Balance:\t" << balance << endl;
}

int main()
{
    Bank o1;
    int choice;
    do
    {
        cout << "\n\n<<<===== Welcome To Our Services =====>>>\n\n";
        cout << "1)  To assign Initial Value\n";
        cout << "2)  To Deposit\n";
        cout << "3)  To Withdraw\n";
        cout << "4)  To Display All Details\n";
        cout << "5)  EXIT\n";
        cout << "Enter your choice :-";
        cin >> choice;
        switch (choice)
        {
        case 1:
            o1.opbal();
            break;
        case 2:
            o1.deposit();
            break;
        case 3:
            o1.withdraw();
            break;
        case 4:
            o1.display();
            break;
        case 5:
            exit(1);
            break;
        }
    } while (1);

    return 0;
}