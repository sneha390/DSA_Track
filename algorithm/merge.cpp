#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>> m >> n;

    vector<int>num1(m);
    vector<int>num2(n);
    cout << "Enter the elements in num1" << endl;
    for(int i = 0; i < m; i++){
        cin >> num1[i];
    }
    cout << "Enter the elements in num2" << endl;
    for(int i = 0; i < n; i++){
        cin >> num2[i];
    }

    num1.resize(m+n);
    for(int i = 0; i < n; i++){
        num1[m+i] = num2[i];
        
    }
    sort(num1.begin(), num1.end());

    cout << "merged Array: " << endl;
    for(int i = 0 ; i < (m + n) ; i++){
        cout <<  num1[i] <<" ";
    }
    cout << endl;
}