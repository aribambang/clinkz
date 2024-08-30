#include <iostream>

using namespace std;

// Big O(n)
void printItems(int n) {
    for (int i = 0; i < n; i++) {
        cout << i << endl;
    }
}

int main() {
    printItems(10);
}