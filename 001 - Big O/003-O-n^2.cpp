#include <iostream>

using namespace std;

// n * n = O(n^2)
void printItems(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i << j << endl;
        }
    }
}

int main() {
    printItems(10);
}