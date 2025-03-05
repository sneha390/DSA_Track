#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

string maxGram(int n , string s){
    unordered_map<string , int> mp;
    int maxCount = 0;
    string result;

    for(int i = 0; i < n; i++){
        string twoGram = s.substr(i,2);
        mp[twoGram]++;

        if(mp[twoGram] > maxCount){
            maxCount = mp[twoGram];
            result = twoGram;
        }
    }

    return result; 
}

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << maxGram(n,s) << endl;
    return 0;
}
