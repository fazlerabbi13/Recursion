#include<iostream>
using namespace std;

void decimalToBinary(long long n){
    if(n == 0)
    return;

    decimalToBinary(n/2);
    cout << n % 2;
}

int main(){
    int T;
    cin >> T;

    while (T--)
    {
        long long N;
        cin >> N;

        if(N == 0){
        cout << 0;
    }
    else{
        decimalToBinary(N);
    }
        cout << "\n";
    }
    
    return 0;
}