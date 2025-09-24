                                                   // DAY 11 - "MAXIMUM PRODUCT SUBARRAY" //

#include <iostream>
#include<vector>
#include <algorithm>

class Solution {
  public:
    int maxProduct(std::vector<int> &arr) {
        // code here
        if (arr.empty()) {
            return 0;
        }
        int current_max = arr[0];
        int current_min = arr[0];
        int global_max = arr[0];
        
        for (int i =1; i< arr.size(); i++) {
            if (arr[i] < 0) {
                std::swap(current_max, current_min);
            }
            current_max = std::max(arr[i], arr[i] * current_max);
            current_min = std::min(arr[i], arr[i] * current_min);
            if (current_max > global_max) {
                global_max = current_max;
            }
        }
        return global_max;
    }
};

int main() {
    Solution S;
    std::vector<int> test_array = {-2, 6, -3, -10, 0, 2};
    int result = S.maxProduct(test_array);
    std::cout << "The maximum product is: " << result << std::endl; 
    return 0;
}