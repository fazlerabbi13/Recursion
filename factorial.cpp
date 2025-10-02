#include<bits/stdc++.h>
using namespace std;

#define ll long long

int factorial(int N){
    if(N == 0){
        return 1;
    }
    return N * factorial(N-1);
}

int main(){
    ll N;
    cin >> N;
    cout << factorial(N) << "\n";
    return 0;
}