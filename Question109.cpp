#include <iostream>
#include <string>
using namespace std;

class Library
{
public:
    int bookID;
    string bookName;
    string author;
    bool issued;

    void addBook()
    {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cin.ignore();

        cout << "Enter Book Name: ";
        getline(cin, bookName);

        cout << "Enter Author Name: ";
        getline(cin, author);

        issued = false;
    }

    void displayBook()
    {
        cout << "\nBook ID   : " << bookID;
        cout << "\nBook Name : " << bookName;
        cout << "\nAuthor    : " << author;
        cout << "\nStatus    : " << (issued ? "Issued" : "Available") << endl;
    }
};

int main()
{
    Library books[100];
    int count = 0;
    int choice, id;
    bool found;

    // ---------- Preloaded Books ----------

    books[count].bookID = 101;
    books[count].bookName = "C Programming";
    books[count].author = "Dennis Ritchie";
    books[count].issued = false;
    count++;

    books[count].bookID = 102;
    books[count].bookName = "Data Structures";
    books[count].author = "Mark Allen Weiss";
    books[count].issued = false;
    count++;

    books[count].bookID = 103;
    books[count].bookName = "Python Basics";
    books[count].author = "John Zelle";
    books[count].issued = false;
    count++;

    // -------------------------------------

    do
    {
        cout << "\n===== Library Management System =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            books[count].addBook();
            count++;
            cout << "\nBook Added Successfully!\n";
            break;

        case 2:
            if (count == 0)
            {
                cout << "\nNo books available.\n";
            }
            else
            {
                for (int i = 0; i < count; i++)
                {
                    books[i].displayBook();
                    cout << "------------------------\n";
                }
            }
            break;

        case 3:
            cout << "\nEnter Book ID to search: ";
            cin >> id;
            found = false;

            for (int i = 0; i < count; i++)
            {
                if (books[i].bookID == id)
                {
                    books[i].displayBook();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nBook not found.\n";
            break;

        case 4:
            cout << "\nEnter Book ID to issue: ";
            cin >> id;
            found = false;

            for (int i = 0; i < count; i++)
            {
                if (books[i].bookID == id)
                {
                    if (!books[i].issued)
                    {
                        books[i].issued = true;
                        cout << "\nBook Issued Successfully.\n";
                    }
                    else
                    {
                        cout << "\nBook is already issued.\n";
                    }

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nBook not found.\n";
            break;

        case 5:
            cout << "\nEnter Book ID to return: ";
            cin >> id;
            found = false;

            for (int i = 0; i < count; i++)
            {
                if (books[i].bookID == id)
                {
                    if (books[i].issued)
                    {
                        books[i].issued = false;
                        cout << "\nBook Returned Successfully.\n";
                    }
                    else
                    {
                        cout << "\nBook was not issued.\n";
                    }

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nBook not found.\n";
            break;

        case 6:
            cout << "\nThank you for using Library Management System!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}