#include<bits/stdc++.h>
using namespace std;

#define ll long long
int maxNumber(vector<ll>& arr,int index){
    if(index == arr.size() - 1){
        return arr[index];
    }

    ll maxInRest = maxNumber(arr, index + 1);

    if(arr[index] > maxInRest){
        return arr[index];
    }else{
        return maxInRest;
    }
}
int main(){
     int N;
    cin >> N;

    vector<ll> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << maxNumber(arr, 0) << "\n";
}