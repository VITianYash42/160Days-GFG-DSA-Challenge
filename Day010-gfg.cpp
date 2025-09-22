                                                           // DAY 10 - "SMALLEST POSITIVE MISSING" //

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
  public:
    int missingNumber(std::vector<int> &arr) {
        // code here
        std::sort(arr.begin(), arr.end());
        int first_positive = 1;
        for (int i = 0; i< arr.size(); i++) {
            if (arr[i] > 0) {
                if (arr[i] == first_positive) {
                    first_positive += 1;
                }
                else if (arr[i] > first_positive) {
                    return first_positive;
                }
            }
        }
        return first_positive;
    }
};

int main() {
    Solution S;
    std::vector<int> test_vector = {2, -3, 4, 1, 1, 7};
    int missing = S.missingNumber(test_vector);
    std::cout << "Smallest missing positive number: " << missing << std::endl;
    return 0;
}