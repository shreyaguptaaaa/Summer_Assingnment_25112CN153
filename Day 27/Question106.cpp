#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empId;
    string name;
    float salary;

public:
    void addEmployee() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayEmployee() {
        cout << "\nEmployee Details";
        cout << "\nEmployee ID : " << empId;
        cout << "\nName        : " << name;
        cout << "\nSalary      : " << salary << endl;
    }

    int getEmpId() {
        return empId;
    }

    void updateEmployee() {
        cin.ignore();

        cout << "Enter New Name: ";
        getline(cin, name);

        cout << "Enter New Salary: ";
        cin >> salary;
    }
};

int main() {
    Employee emp[100];
    int count = 0, choice, id, i;
    bool found;

    do {
        cout << "\n===== Employee Management System =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display All Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Employee";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            emp[count].addEmployee();
            count++;
            break;

        case 2:
            if (count == 0)
                cout << "No employee records found!\n";
            else
                for (i = 0; i < count; i++)
                    emp[i].displayEmployee();
            break;

        case 3:
            cout << "Enter Employee ID to Search: ";
            cin >> id;
            found = false;

            for (i = 0; i < count; i++) {
                if (emp[i].getEmpId() == id) {
                    emp[i].displayEmployee();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found!\n";
            break;

        case 4:
            cout << "Enter Employee ID to Update: ";
            cin >> id;
            found = false;

            for (i = 0; i < count; i++) {
                if (emp[i].getEmpId() == id) {
                    emp[i].updateEmployee();
                    cout << "Record Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found!\n";
            break;

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}
