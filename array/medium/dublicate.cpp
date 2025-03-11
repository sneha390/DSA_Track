#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& arr) {
    unordered_map<int, int> freq;
    vector<int> ans;

    for (int num : arr) {
        freq[num]++;
    }

    for (auto it : freq) {
        if (it.second > 1) {
            ans.push_back(it.first);
        }
    }
    
    return ans;
}

int main() {
    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1}; 

    vector<int> duplicates = findDuplicates(arr);

    cout << "Duplicate elements are: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
