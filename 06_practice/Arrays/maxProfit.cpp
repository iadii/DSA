#include <bits/stdc++.h>

// LeetCode 121: Best Time to Buy and Sell Stock
// Find maximum profit from single buy-sell transaction
// Time: O(n), Space: O(1)
int maxProfit(vector<int>& prices) {
    if (prices.size() < 2) return 0;
    
    int minPrice = prices[0];
    int maxProfit = 0;
    
    for (int i = 1; i < prices.size(); i++) {
        int profit = prices[i] - minPrice;
        maxProfit = max(maxProfit, profit);
        minPrice = min(minPrice, prices[i]);
    }
    
    return maxProfit;
} 

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    
    cout << "Prices: ";
    for (int price : prices) cout << price << " ";
    cout << endl;
    
    cout << "Maximum profit: " << maxProfit(prices) << endl;
    
    return 0;
}
