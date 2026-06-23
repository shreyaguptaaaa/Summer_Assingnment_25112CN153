#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    
    cout << "Enter a string: ";
    cin >> a;

    for(int i = 0; i < a.length(); i++)
    {
        for(int j = i + 1; j < a.length(); j++)
        {
            if(a[i] == a[j])
            {
                cout << "First repeating character: " << a[i];
                return 0;
            }
        }
    }

    cout << "No repeating character found.";
    return 0;
}