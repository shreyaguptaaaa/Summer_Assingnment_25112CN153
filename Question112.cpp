#include <iostream>
#include <string>
using namespace std;

class Contact
{
private:
    string name;
    string phone;
    string email;

public:
    void addContact()
    {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Phone Number: ";
        getline(cin, phone);

        cout << "Enter Email: ";
        getline(cin, email);

        cout << "\nContact Added Successfully!\n";
    }

    void updatePhone()
    {
        cout << "Enter New Phone Number: ";
        cin.ignore();
        getline(cin, phone);

        cout << "Phone Number Updated Successfully!\n";
    }

    void displayContact()
    {
        cout << "\n----- Contact Details -----\n";
        cout << "Name         : " << name << endl;
        cout << "Phone Number : " << phone << endl;
        cout << "Email        : " << email << endl;
    }
};

int main()
{
    Contact c;
    int choice;

    do
    {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Update Phone Number\n";
        cout << "3. Display Contact\n";
        cout << "4. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            c.addContact();
            break;
        case 2:
            c.updatePhone();
            break;
        case 3:
            c.displayContact();
            break;
        case 4:
            cout << "Thank You!\n";
            break;
        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}