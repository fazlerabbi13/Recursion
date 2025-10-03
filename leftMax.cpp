#include<bits/stdc++.h>
using namespace std;

#define ll long long

void findMaxRange(vector<ll>& arr, ll N, ll index, ll currentMax){
    if(index == N){
        return;
    }

    currentMax = max(currentMax,arr[index]);

    cout << currentMax << " ";

    findMaxRange(arr,N,index + 1, currentMax);
}

int main(){
    ll N;
    cin >> N;

    vector<ll> arr(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    findMaxRange(arr,N,0,INT_MIN);

    return 0;
}