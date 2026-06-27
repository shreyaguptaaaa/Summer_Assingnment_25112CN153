#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    void addStudent() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayStudent() {
        cout << "\nStudent Details";
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }

    int getRollNo() {
        return rollNo;
    }

    void updateStudent() {
        cin.ignore();
        cout << "Enter New Name: ";
        getline(cin, name);

        cout << "Enter New Marks: ";
        cin >> marks;
    }
};

int main() {
    Student s[100];
    int count = 0;
    int choice, roll, i;
    bool found;

    do {
        cout << "\n\n===== Student Record Management System =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display All Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            s[count].addStudent();
            count++;
            break;

        case 2:
            if (count == 0)
                cout << "No records found!\n";
            else
                for (i = 0; i < count; i++)
                    s[i].displayStudent();
            break;

        case 3:
            cout << "Enter Roll Number to Search: ";
            cin >> roll;
            found = false;

            for (i = 0; i < count; i++) {
                if (s[i].getRollNo() == roll) {
                    s[i].displayStudent();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found!\n";
            break;

        case 4:
            cout << "Enter Roll Number to Update: ";
            cin >> roll;
            found = false;

            for (i = 0; i < count; i++) {
                if (s[i].getRollNo() == roll) {
                    s[i].updateStudent();
                    found = true;
                    cout << "Record Updated Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "Student not found!\n";
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
