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
    int target;
    cin >> target;
    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = (start + end) /2;
        if(arr[mid] == target){
            cout << mid << endl;
            break;
        }
        else if(arr[mid] < target){
            start = mid+1;
        }else{
            end = mid -1;
        }
    }
    return -1;
}