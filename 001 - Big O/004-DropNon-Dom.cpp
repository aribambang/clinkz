#include <iostream>

using namespace std;

// Drop Non-Dominants
// O(n^2) + O(n) = O(n^2 + n)
void printItems(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i << j << endl;
        }
    }

    for (int k = 0; k < n; k++) {
        cout << k << endl;
    }
}

int main() {
    printItems(10);
}