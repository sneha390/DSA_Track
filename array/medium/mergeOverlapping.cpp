#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        int n = arr.size();
        vector<vector<int>>ans;
        sort(arr.begin() , arr.end());
        for(int i = 0; i < n; i++){
            if(ans.empty() || arr[i][0] > ans.back()[1]){
                ans.push_back(arr[i]);
            }else{
                ans.back()[1] = max(ans.back()[1] , arr[i][1]);
            }  
        }
    return ans;
}

int main() {
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    vector<vector<int>> mergedIntervals = mergeOverlap(intervals);

    cout << "Merged Intervals: \n";
    for (const auto& interval : mergedIntervals) {
        cout << "[" << interval[0] << ", " << interval[1] << "]\n";
    }

    return 0;
}

