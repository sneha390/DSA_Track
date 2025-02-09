#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum= 0;
    int maxSum = arr[0];
    for(int i = 0; i < n; i++){
        sum += arr[i];
        maxSum = max(maxSum, sum);
        if(sum < 0){
            sum = 0;
        }
    }
    cout << "Maximum Sum:- " << maxSum << endl;
}