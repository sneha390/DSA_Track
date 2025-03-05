#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    unordered_map<string, int> mp;
    int n = stringList.size();
    for(int i = 0; i <  n;i++){
        mp[i]++;
    }
    vector<int>result;
    for(const string query : queries){
        result.push_back(mp[query]);
    }
    return result;
}
