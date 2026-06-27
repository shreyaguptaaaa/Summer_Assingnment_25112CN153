#include <iostream>
#include <string>
using namespace std;

class Marksheet {
private:
    int rollNo;
    string name;
    float m1, m2, m3, total, percentage;
    char grade;

public:
    void addStudent() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Marks of Subject 1: ";
        cin >> m1;
        cout << "Enter Marks of Subject 2: ";
        cin >> m2;
        cout << "Enter Marks of Subject 3: ";
        cin >> m3;

        total = m1 + m2 + m3;
        percentage = total / 3;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 75)
            grade = 'B';
        else if (percentage >= 60)
            grade = 'C';
        else if (percentage >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void displayMarksheet() {
        cout << "\n------ Marksheet ------";
        cout << "\nRoll Number : " << rollNo;
        cout << "\nName        : " << name;
        cout << "\nSubject 1   : " << m1;
        cout << "\nSubject 2   : " << m2;
        cout << "\nSubject 3   : " << m3;
        cout << "\nTotal Marks : " << total;
        cout << "\nPercentage  : " << percentage << "%";
        cout << "\nGrade       : " << grade << endl;
    }

    int getRollNo() {
        return rollNo;
    }
};

int main() {
    Marksheet student[100];
    int count = 0, choice, roll, i;
    bool found;

    do {
        cout << "\n===== Marksheet Generation System =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display All Marksheets";
        cout << "\n3. Search Marksheet";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            student[count].addStudent();
            count++;
            break;

        case 2:
            if (count == 0)
                cout << "No records found!\n";
            else
                for (i = 0; i < count; i++)
                    student[i].displayMarksheet();
            break;

        case 3:
            cout << "Enter Roll Number: ";
            cin >> roll;
            found = false;

            for (i = 0; i < count; i++) {
                if (student[i].getRollNo() == roll) {
                    student[i].displayMarksheet();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found!\n";
            break;

        case 4:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}