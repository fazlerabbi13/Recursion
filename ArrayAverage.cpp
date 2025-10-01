#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll sumArray(vector<ll>& arr,int index){

    if(index == arr.size()){
        return 0;
    }

    return arr[index] + sumArray(arr,index + 1);
}

double findAverage(vector<ll>& arr){
    ll total = sumArray(arr, 0);
    return (double)total / arr.size();
}

int main(){
    int N;
    cin >> N;

    vector<ll> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << fixed << setprecision(6) << findAverage(arr) << "\n";
}