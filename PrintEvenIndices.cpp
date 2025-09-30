#include<bits/stdc++.h>
using namespace std;
void printEvenReverse(vector<int>& arr, int index){
    if(index < 0){
        return;
    }

    if(index % 2 == 0){
        // if i take this out put it traverse from end to start of an array
        cout << arr[index] << " ";
    }
    
    printEvenReverse(arr, index-1);
}

int main(){
    int N;
    cin >> N;

    vector<int> arr(N);

    for(int i = 0; i< N; i++){
        cin >> arr[i]; 
    }

    printEvenReverse(arr, N-1);

    return 0;
}