#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int>findDuplicate(vector<int> & nums){
    vector<int>ans;
    unordered_map<int , int> freq;
    for(int num : nums){
        freq[num] ++;
    }

    for(auto it : freq){
        if(it.second > 1){
            ans.push_back(it.first);
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> result = findDuplicate(arr);

    for(int num : result){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}