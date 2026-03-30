//Print butterfly pattern

#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // Upper part
    for (int i = 1; i <= n; i++) {
        // stars (left)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // stars (right)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part
    for (int i = n; i >= 1; i--) {
        // stars (left)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // stars (right)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}