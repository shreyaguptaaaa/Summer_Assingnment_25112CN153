#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    string name[100];
    string course[100];
    int roll[100];
    float marks[100];

    // Input student details
    cout << "\nEnter Student Details:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter Roll Number: ";
        cin >> roll[i];

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name[i]);

        cout << "Enter Course: ";
        getline(cin, course[i]);

        cout << "Enter Marks: ";
        cin >> marks[i];
    }

    // Display student records
    cout << "\n\n----- Student Records -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number : " << roll[i] << endl;
        cout << "Name        : " << name[i] << endl;
        cout << "Course      : " << course[i] << endl;
        cout << "Marks       : " << marks[i] << endl;
    }

    return 0;
}