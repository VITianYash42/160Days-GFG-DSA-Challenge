                                                   // DAY 12 - "MAX CIRCULAR SUBARRAY SUM" //

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
  public:
    int maxCircularSum(std::vector<int> &arr) {
        // code here
        if (arr.empty()) {
            return 0;
        }
        int current_maxSum = arr[0];
        int global_maxSum = arr[0];
        
        for (int i = 1; i< arr.size(); i++) {
            current_maxSum = std::max(arr[i], arr[i] + current_maxSum);
            if (current_maxSum > global_maxSum) {
                global_maxSum = current_maxSum;
            }
        }
        
        int current_minSum = arr[0];
        int global_minSum = arr[0];
        for (int i =1; i< arr.size(); i++) {
            current_minSum = std::min(arr[i], arr[i] + current_minSum);
            if (current_minSum < global_minSum) {
                global_minSum = current_minSum;
            }
        }
        
        int totalSum = 0;
        for (int i = 0; i< arr.size(); i++) {
            totalSum += arr[i];
        }
        
        int wrap_sum = totalSum - global_minSum;
        if (global_maxSum < 0) {
            return global_maxSum;
        }
        return std::max(global_maxSum, wrap_sum);
    }
};    

int main() {
    Solution S;
    std::vector<int> test_vector = {10, -3, -4, 7, 6, 5, -4, -1};
    int max_sum = S.maxCircularSum(test_vector);
    std::cout << "Maximum circular subarray sum: " << max_sum << std::endl;
    return 0;
}