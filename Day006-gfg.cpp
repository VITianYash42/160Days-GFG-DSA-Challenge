#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
  public:
    std::vector<int> findMajority(std::vector<int>& arr) {
        // Code here
        int n = arr.size();
        if (n==0) return {};
        int floor1 = n/3;
        std::sort(arr.begin(), arr.end());
        int count = 1;
        std::vector<int> duplicate;
        for (int i = 1; i<n; i++) {
            if (arr[i] == arr[i-1]) {
                count ++;
            }
            else {
                if (count > floor1) {
                    duplicate.push_back(arr[i-1]);
                }
                count = 1;
            }
        }
        if (count > floor1) {
            duplicate.push_back(arr[n-1]);
        }
        return duplicate;
    }
};

int main() {
    Solution S;
    std::vector<int> test_vector = {3, 1, 3, 3, 2, 2, 2};
    std::vector<int> majority_elements = S.findMajority(test_vector);

    std::cout << "(Majority elements > n/3): ";
    if (majority_elements.empty() || majority_elements[0] == -1) {
        std::cout << "None";
    } else {
        for (int num : majority_elements) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
