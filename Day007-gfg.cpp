                                          // DAY 7 - "STOCK BUY AND SELL - MULTIPLE TRANSACTIONS ALLOWED" //

#include <iostream>
#include <vector>

class Solution {
  public:
    int maximumProfit(std::vector<int> &prices) {
        // code here
        int total_profit = 0; 
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1]) {
                total_profit += prices[i] - prices[i-1];
            }
        }
        return total_profit;
    }
};

int main() {
    Solution S;
    std::vector<int> test_prices = {10, 20, 5, 15};
    int profit = S.maximumProfit(test_prices);
    std::cout << "Maximum profit: " << profit << std::endl;
    return 0;
}