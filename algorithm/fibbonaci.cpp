#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int prev2 = 0;
    int prev1 = 1;
    int curr;
    for(int i = 0; i < n; i++){
        curr = prev2 + prev1;
        prev2 = prev1;
        prev1 = curr;
        cout << curr << endl;
    }
}