#include <iostream>
using namespace std;

void head(int n) {
    if (n != 0) {
        // Recursive call before processing
        head(n - 1);
    }
    cout << n << " ";
}

int main() {
    head(5);
    return 0;
}