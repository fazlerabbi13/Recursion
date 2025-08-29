#include <iostream>
using namespace std;

void tail(int n) {
    if (n == 0)
        return;
    cout << n << " ";

    // Recursive call after processing
    tail(n - 1);
}

int main() {
    tail(5);
    return 0;
}