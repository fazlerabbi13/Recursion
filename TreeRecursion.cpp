#include <iostream>
using namespace std;

void tree(int n) {
    if (n == 0)
        return;
    cout << n << " ";

    // Two recursive calls
    tree(n - 1);
    tree(n - 1);
}

int main() {
    tree(3);
    return 0;
}