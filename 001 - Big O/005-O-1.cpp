#include <iostream>

using namespace std;

// O(1)
int addItems(int n) {
    return n + n;
}

int main() {
    cout << addItems(10) << endl;
}