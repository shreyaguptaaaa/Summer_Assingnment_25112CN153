#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNo;
    string name;
    float balance;

public:
    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountNo;

        cout << "Enter Account Holder Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit()
    {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited successfully.\n";
    }

    void withdraw()
    {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
        else
        {
            cout << "Insufficient balance.\n";
        }
    }

    void display()
    {
        cout << "\n--- Account Details ---\n";
        cout << "Account Number : " << accountNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Balance         : " << balance << endl;
    }
};

int main()
{
    BankAccount account;
    int choice;

    account.createAccount();

    do
    {
        cout << "\n===== Bank Account Menu =====\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Account Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            account.deposit();
            break;
        case 2:
            account.withdraw();
            break;
        case 3:
            account.display();
            break;
        case 4:
            cout << "Thank you!\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
