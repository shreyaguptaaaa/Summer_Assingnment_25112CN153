#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of books: ";
    cin >> n;
    cin.ignore();

    string title[100], author[100];
    int bookID[100];

    // Input book details
    for (int i = 0; i < n; i++)
    {
        cout << "\nBook " << i + 1 << endl;

        cout << "Enter Book ID: ";
        cin >> bookID[i];
        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title[i]);

        cout << "Enter Author Name: ";
        getline(cin, author[i]);
    }

    // Display library records
    cout << "\n----- Library Records -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nBook " << i + 1 << endl;
        cout << "Book ID     : " << bookID[i] << endl;
        cout << "Book Title  : " << title[i] << endl;
        cout << "Author Name : " << author[i] << endl;
    }

    return 0;
}