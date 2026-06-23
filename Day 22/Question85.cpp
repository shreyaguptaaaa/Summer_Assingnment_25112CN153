#include <iostream>
using namespace std;

int main() {
    char str[100];
    int len = 0;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Find length
    while (str[len] != '\0') {
        len++;
    }

    // Check palindrome
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "Palindrome String";
    else
        cout << "Not a Palindrome String";

    return 0;
}
