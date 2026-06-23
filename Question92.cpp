#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int maxCount = 0;
    char maxChar;

    for(int i = 0; i < str.length(); i++)
    {
        int count = 0;

        for(int j = 0; j < str.length(); j++)
        {
            if(str[i] == str[j])
                count++;
        }

        if(count > maxCount)
        {
            maxCount = count;
            maxChar = str[i];
        }
    }

    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Occurrences: " << maxCount;

    return 0;
}