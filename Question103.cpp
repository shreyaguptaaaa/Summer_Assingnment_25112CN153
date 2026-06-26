#include <iostream>
using namespace std;

int main()
{
    int choice;
    float balance = 5000, amount;

    do
    {
        cout << "\n===== ATM MENU =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Current Balance = Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Deposit Successful!" << endl;
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount <= balance)
                {
                    balance -= amount;
                    cout << "Withdrawal Successful!" << endl;
                }
                else
                {
                    cout << "Insufficient Balance!" << endl;
                }
                break;

            case 4:
                cout << "Thank you for using ATM. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 4);   // 👈 THIS is the important part

    return 0;
}