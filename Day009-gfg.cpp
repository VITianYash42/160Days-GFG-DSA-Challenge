                                            // DAY 9 - "KADANE'S ALGORITHM" //

#include <iostream>
#include <vector>

class Solution {
  public:
    int maxSubarraySum(std::vector<int> &arr) {
        // Code here
        if (arr.empty()) {
            return 0;
        }
        int current_max = arr[0];
        int global_max = arr[0];
        
        for (int i =1; i< arr.size(); i++) {
            current_max = std::max(arr[i], current_max + arr[i]);
            if (current_max > global_max) {
                global_max = current_max;
            }
        }
        return global_max;
    }
};

int main() {
    Solution S;
    std::vector<int> test_vector = {2, 3, -8, 7, -1, 2, 3};
    int max_sum = S.maxSubarraySum(test_vector);

    std::cout << "Maximum subarray sum: " << max_sum << std::endl;
    return 0;
}