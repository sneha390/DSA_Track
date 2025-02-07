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

    int lastIndex = 0;
    int jump = 0;
    int maxReach = 0;
    for(int i = 0; i < n; i++){
        maxReach = max(maxReach, arr[i] + i);
        if(i == lastIndex){
            if(maxReach == i){
                jump--;
                break;
            }
            lastIndex = maxReach;
            jump++;
            if(maxReach > n-1){
                break;
            }
        }

    }
    cout << "Minimum jump to reach end: " << jump << endl;
}