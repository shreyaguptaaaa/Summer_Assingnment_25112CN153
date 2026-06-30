#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of employees: ";
    cin >> n;
    cin.ignore();

    int empID[100];
    string name[100];
    string department[100];
    float salary[100];

    // Input employee details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "Enter Employee ID: ";
        cin >> empID[i];
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name[i]);

        cout << "Enter Department: ";
        getline(cin, department[i]);

        cout << "Enter Salary: ";
        cin >> salary[i];
        cin.ignore();
    }

    // Display employee records
    cout << "\n----- Employee Records -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Employee ID : " << empID[i] << endl;
        cout << "Name        : " << name[i] << endl;
        cout << "Department  : " << department[i] << endl;
        cout << "Salary      : " << salary[i] << endl;
    }

    return 0;
}
