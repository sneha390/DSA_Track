#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> mergeIntervals(vector<pair<int, int>> &intervals) {
    if (intervals.empty()) return {};

    sort(intervals.begin(), intervals.end());

    vector<pair<int, int>> merged;
    merged.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++) {
       
        pair<int, int> &last = merged.back();

        if (intervals[i].first <= last.second) {
           
            last.second = max(last.second, intervals[i].second);
        } else {
            
            merged.push_back(intervals[i]);
        }
    }

    return merged;
}

int main() {
    vector<pair<int, int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    
    vector<pair<int, int>> merged = mergeIntervals(intervals);

    cout << "Merged Intervals: ";
    for (auto &interval : merged) {
        cout << "[" << interval.first << ", " << interval.second << "] ";
    }

    return 0;
}