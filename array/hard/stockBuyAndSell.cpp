#include <iostream>
#include <vector>
using namespace std;

int stockBuyAndSell(const vector<int>& prices) {
    int totalProfit = 0;
    for (size_t i = 1; i < prices.size(); i++) {
        if (prices[i] > prices[i - 1])
            totalProfit += prices[i] - prices[i - 1];
    }
    return totalProfit;
}

int main() {
    
    vector<int> arr1 = {100, 180, 260, 310, 40, 535, 695};
    cout << "Maximum Profit (Example 1): " << stockBuyAndSell(arr1) << endl; 

    vector<int> arr2 = {4, 2, 2, 2, 4};
    cout << "Maximum Profit (Example 2): " << stockBuyAndSell(arr2) << endl; 

    vector<int> arr3 = {4, 2};
    cout << "Maximum Profit (Example 3): " << stockBuyAndSell(arr3) << endl; 

    return 0;
}
