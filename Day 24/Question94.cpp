#include <iostream>
#include <string>
using namespace std;

string compressString(string str) {
    string compressed = "";
    int count = 1;

    for (int i = 0; i < str.length(); i++) {
        if (i < str.length() - 1 && str[i] == str[i + 1]) {
            count++;
        } else {
            compressed += str[i];
            compressed += to_string(count);
            count = 1;
        }
    }

    return compressed;
}

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Compressed string: " << compressString(str) << endl;

    return 0;
}
