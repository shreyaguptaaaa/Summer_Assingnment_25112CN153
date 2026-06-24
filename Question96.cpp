#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string removeDuplicates(string str) {
    unordered_set<char> seen;
    string result = "";

    for (char ch : str) {
        if (seen.find(ch) == seen.end()) {
            seen.insert(ch);
            result += ch;
        }
    }

    return result;
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "String after removing duplicates: "
         << removeDuplicates(str) << endl;

    return 0;
}