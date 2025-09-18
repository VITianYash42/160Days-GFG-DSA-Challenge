#include <iostream>
#include <vector>
#include <limits>

class Solution {
  public:
    int maximumProfit(std::vector<int> &prices) {
        // code here
        int min_price = std::numeric_limits<int>::max();
        int max_profit = 0;
        
        for (int i =0; i< prices.size(); i++) {
            if (prices[i] < min_price) {
                min_price = prices[i];
            }
            else if (prices[i] - min_price > max_profit) {
                max_profit = prices[i] - min_price;
            }    
        }
        return max_profit;
    }
};

int main() {
    Solution S;
    std::vector<int> test_prices = {7, 10, 1, 3, 6, 9, 2};
    int profit = S.maximumProfit(test_prices);
    std::cout << "Maximum profit: " << profit << std::endl;
    return 0;
}