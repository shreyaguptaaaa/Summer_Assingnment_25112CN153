#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int roll[MAX];
string name[MAX];
float marks[MAX];

int totalStudents = 0;

// Add student
void addStudent()
{
    cout << "Enter Roll Number: ";
    cin >> roll[totalStudents];
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name[totalStudents]);

    cout << "Enter Marks: ";
    cin >> marks[totalStudents];

    totalStudents++;
    cout << "Student added successfully!\n";
}

// Display students
void displayStudents()
{
    if (totalStudents == 0)
    {
        cout << "No records found!\n";
        return;
    }

    for (int i = 0; i < totalStudents; i++)
    {
        cout << "\nRoll No: " << roll[i];
        cout << "\nName   : " << name[i];
        cout << "\nMarks  : " << marks[i] << "\n";
    }
}

// Search student
void searchStudent()
{
    int r;
    cout << "Enter Roll Number to search: ";
    cin >> r;

    for (int i = 0; i < totalStudents; i++)
    {
        if (roll[i] == r)
        {
            cout << "\nRecord Found!";
            cout << "\nName  : " << name[i];
            cout << "\nMarks : " << marks[i] << "\n";
            return;
        }
    }

    cout << "Student not found!\n";
}

// Delete student
void deleteStudent()
{
    int r;
    cout << "Enter Roll Number to delete: ";
    cin >> r;

    int pos = -1;

    for (int i = 0; i < totalStudents; i++)
    {
        if (roll[i] == r)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    {
        cout << "Student not found!\n";
        return;
    }

    for (int i = pos; i < totalStudents - 1; i++)
    {
        roll[i] = roll[i + 1];
        name[i] = name[i + 1];
        marks[i] = marks[i + 1];
    }

    totalStudents--;
    cout << "Student deleted successfully!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Delete Student";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1: addStudent(); break;
        case 2: displayStudents(); break;
        case 3: searchStudent(); break;
        case 4: deleteStudent(); break;
        case 5: cout << "Exiting...\n"; break;
        default: cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}