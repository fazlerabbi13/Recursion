#include<bits/stdc++.h>
using namespace std;

#define ll long long 

ll sum(vector<ll>& arr, int index, int M) {
    
    if (M == 0){
        return 0;
    }

    
    return arr[index] + sum(arr, index - 1, M - 1);
}

int main(){
    ll N,M;
    cin >> N >> M;

    vector<ll> arr(N);

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
     cout << sum(arr, N - 1, M) << "\n";
    return 0;
}