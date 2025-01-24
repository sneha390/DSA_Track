#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>height(n);

    for(int i = 0; i < n; i++){
        cin >> height[i];
    }

   int start = 0;
   int end = height.size() - 1;
   int maxArea = 0;
   while(start < end){
            int area = min(height[start],height[end]) * (end - start);
            maxArea = max(maxArea , area);

           if(height[start] < height[end]){
            start++;
           }else{
            end--;
           }
    } 

    cout << maxArea << endl;
}