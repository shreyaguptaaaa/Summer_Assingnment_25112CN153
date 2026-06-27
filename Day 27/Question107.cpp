#include <iostream>
#include <string>
using namespace std;

class Salary {
private:
    int empId;
    string name;
    float basicSalary, hra, da, grossSalary;

public:
    void addRecord() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        // Salary Calculation
        hra = basicSalary * 0.20;   // 20% HRA
        da = basicSalary * 0.10;    // 10% DA
        grossSalary = basicSalary + hra + da;
    }

    void displayRecord() {
        cout << "\nEmployee ID   : " << empId;
        cout << "\nEmployee Name : " << name;
        cout << "\nBasic Salary  : " << basicSalary;
        cout << "\nHRA           : " << hra;
        cout << "\nDA            : " << da;
        cout << "\nGross Salary  : " << grossSalary << endl;
    }

    int getEmpId() {
        return empId;
    }

    void updateSalary() {
        cout << "Enter New Basic Salary: ";
        cin >> basicSalary;

        hra = basicSalary * 0.20;
        da = basicSalary * 0.10;
        grossSalary = basicSalary + hra + da;
    }
};

int main() {
    Salary emp[100];
    int count = 0, choice, id, i;
    bool found;

    do {
        cout << "\n===== Salary Management System =====";
        cout << "\n1. Add Salary Record";
        cout << "\n2. Display All Records";
        cout << "\n3. Search Employee";
        cout << "\n4. Update Salary";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            emp[count].addRecord();
            count++;
            break;

        case 2:
            if (count == 0)
                cout << "No records found!\n";
            else
                for (i = 0; i < count; i++)
                    emp[i].displayRecord();
            break;

        case 3:
            cout << "Enter Employee ID: ";
            cin >> id;
            found = false;

            for (i = 0; i < count; i++) {
                if (emp[i].getEmpId() == id) {
                    emp[i].displayRecord();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found!\n";
            break;

        case 4:
            cout << "Enter Employee ID: ";
            cin >> id;
            found = false;

            for (i = 0; i < count; i++) {
                if (emp[i].getEmpId() == id) {
                    emp[i].updateSalary();
                    cout << "Salary Updated Successfully!\n";
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
