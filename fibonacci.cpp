#include<bits/stdc++.h>
using namespace std;

int findFib(int n){
    if(n <= 1){
        return n;
    }
    return findFib(n-1)+findFib(n-2);
}

int main(){
    int n;
    cin >> n;
    cout << findFib(n) << "\n";
    return 0;
}