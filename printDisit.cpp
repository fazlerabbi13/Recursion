#include<iostream>
using namespace std;

void printDisit(long long n){
    if(n < 10){
        cout << n;
        return;
    }

    printDisit(n/10);
    cout << " " << n % 10;
}

int main(){
    int T;
    cin >> T;
    while (T--)
    {
        long long N;
        cin >> N;
        printDisit(N);
        cout << "\n";
    }
    
    return 0;
}