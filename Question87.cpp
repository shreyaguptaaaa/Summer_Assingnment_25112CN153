#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int freq[256] = {0};

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    cout << "\nCharacter Frequencies:\n";

    // Print frequency of each character once
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] != 0) {
            cout << str[i] << " = " << freq[(int)str[i]] << endl;
            freq[(int)str[i]] = 0; // avoid duplicate printing
        }
    }

    return 0;
}