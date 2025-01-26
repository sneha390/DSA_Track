#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }

    int lastELe = arr[n-1];
    for(int i = n-1; i > 0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = lastELe;

    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}