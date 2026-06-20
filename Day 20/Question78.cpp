#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the order of the matrix: ";
    cin >> n;

    int A[10][10];

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    bool symmetric = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                symmetric = false;
                break;
            }
        }
    }

    if (symmetric)
        cout << "The matrix is Symmetric." << endl;
    else
        cout << "The matrix is Not Symmetric." << endl;

    return 0;
}
