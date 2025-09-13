                                                      // DAY 3 - "REVERSE AN ARRAY" //

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
  public:
    void reverseArray(std::vector<int> &arr) {
        std::reverse(arr.begin(), arr.end());
    }
};

int main() {
    Solution S;
    std::vector<int> test_vector = {1, 4, 3, 2, 6, 5};
    S.reverseArray(test_vector);
    std::cout << "Reversed array: ";
    for (int num : test_vector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}