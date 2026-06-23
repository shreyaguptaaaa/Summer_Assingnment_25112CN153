#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int f;

    cout << "Enter a string: ";
    cin >> a;

    for(int i = 0; i < a.length(); i++)
    {
        f = 0;

        for(int j = 0; j < a.length(); j++)
        {
            if(a[i] == a[j] && i != j)
            {
                f = 1;
                break;
            }
        }

        if(f == 0)
        {
            cout << "First non-repeating character: " << a[i];
            return 0;
        }
    }

    cout << "No non-repeating character found.";
    return 0;
}
