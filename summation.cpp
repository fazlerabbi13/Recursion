#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll summation(vector<ll>& arr, ll index) {
    if (index == arr.size()) {
        return 0;
    }
    return arr[index] + summation(arr, index + 1);
}

int main() {
    int N;
    cin >> N;

    vector<ll> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << summation(arr, 0) << "\n";
}
