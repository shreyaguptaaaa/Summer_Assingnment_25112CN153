#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, choice, key;
    int sum = 0, max;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Display Array\n";
        cout << "2. Find Sum of Elements\n";
        cout << "3. Find Largest Element\n";
        cout << "4. Search an Element\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Array Elements: ";
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
                break;

            case 2:
                sum = 0;
                for (int i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Sum = " << sum << endl;
                break;

            case 3:
                max = arr[0];
                for (int i = 1; i < n; i++)
                {
                    if (arr[i] > max)
                        max = arr[i];
                }
                cout << "Largest Element = " << max << endl;
                break;

            case 4:
            {
                cout << "Enter element to search: ";
                cin >> key;
                bool found = false;

                for (int i = 0; i < n; i++)
                {
                    if (arr[i] == key)
                    {
                        cout << "Element found at position " << i + 1 << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Element not found." << endl;
                break;
            }

            case 5:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}