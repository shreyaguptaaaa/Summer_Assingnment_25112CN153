#include <iostream>
using namespace std;

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    Product p[100];
    int n = 0, choice, searchId, i;

    do
    {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter Product ID: ";
                cin >> p[n].id;
                cout << "Enter Product Name: ";
                cin >> p[n].name;
                cout << "Enter Quantity: ";
                cin >> p[n].quantity;
                cout << "Enter Price: ";
                cin >> p[n].price;
                n++;
                cout << "Product Added Successfully!\n";
                break;

            case 2:
                if (n == 0)
                {
                    cout << "No products available.\n";
                }
                else
                {
                    cout << "\nID\tName\tQuantity\tPrice\n";
                    for (i = 0; i < n; i++)
                    {
                        cout << p[i].id << "\t"
                             << p[i].name << "\t"
                             << p[i].quantity << "\t\t"
                             << p[i].price << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Product ID to search: ";
                cin >> searchId;
                for (i = 0; i < n; i++)
                {
                    if (p[i].id == searchId)
                    {
                        cout << "Product Found!\n";
                        cout << "Name: " << p[i].name << endl;
                        cout << "Quantity: " << p[i].quantity << endl;
                        cout << "Price: " << p[i].price << endl;
                        break;
                    }
                }
                if (i == n)
                    cout << "Product Not Found!\n";
                break;

            case 4:
                cout << "Enter Product ID: ";
                cin >> searchId;
                for (i = 0; i < n; i++)
                {
                    if (p[i].id == searchId)
                    {
                        cout << "Enter New Quantity: ";
                        cin >> p[i].quantity;
                        cout << "Quantity Updated Successfully!\n";
                        break;
                    }
                }
                if (i == n)
                    cout << "Product Not Found!\n";
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
