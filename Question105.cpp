#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[100], str2[100];
    int choice;

    do
    {
        cout << "\n===== MENU DRIVEN STRING OPERATIONS =====\n";
        cout << "1. Find Length of String\n";
        cout << "2. Concatenate Two Strings\n";
        cout << "3. Compare Two Strings\n";
        cout << "4. Reverse a String\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter a string: ";
                cin >> str1;
                cout << "Length = " << strlen(str1) << endl;
                break;

            case 2:
                cout << "Enter first string: ";
                cin >> str1;
                cout << "Enter second string: ";
                cin >> str2;
                strcat(str1, str2);
                cout << "Concatenated String = " << str1 << endl;
                break;

            case 3:
                cout << "Enter first string: ";
                cin >> str1;
                cout << "Enter second string: ";
                cin >> str2;

                if (strcmp(str1, str2) == 0)
                    cout << "Strings are Equal." << endl;
                else
                    cout << "Strings are Not Equal." << endl;
                break;

            case 4:
                cout << "Enter a string: ";
                cin >> str1;
                strrev(str1);
                cout << "Reversed String = " << str1 << endl;
                break;

            case 5:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}