#include <iostream>
using namespace std;

void funcA(int);
void funcB(int);

void funcA(int n) {
    if (n > 0) {
        cout << n << " ";
        funcB(n - 1);
    }
}

void funcB(int n) {
    if (n > 0) {
        cout << n << " ";
        funcA(n / 2);
    }
}

int main() {
    funcA(10);
    return 0;
}