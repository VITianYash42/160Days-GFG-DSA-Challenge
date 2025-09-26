                                                       // DAY 13 - "MINIMIZE THE HEIGHTS II" //

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
  public:
    int getMinDiff(std::vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if (n <= 1) {
            return 0;
        }
        std::sort(arr.begin(), arr.end());
        int result = arr[n-1] - arr[0];
        for (int i = 0; i< n-1; i++) {
            if (arr[i+1] - k < 0) {
                continue;
            }
            
            int min_possible = std::min(arr[0] + k, arr[i+1] - k);
            int max_possible = std::max(arr[i] + k, arr[n-1] - k);
            result = std::min(result, max_possible - min_possible);
        }
        return result;
    }
};

int main() {
    Solution S;
    std::vector<int> test_vector = {1, 5, 8, 10};
    int k = 2;

    std::cout << "Original Heights: ";
    for (int height : test_vector) {
        std::cout << height << " ";
    }

    std::cout << ", k = " << k << std::endl;
    int min_diff = S.getMinDiff(test_vector, k);
    std::cout << "Minimum possible difference: " << min_diff << std::endl;
    return 0;
}