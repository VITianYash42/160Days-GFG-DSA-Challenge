                                                // DAY 1 - "SECOND LARGEST" //

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        if ( n < 2) {
            return -1;
        }
        std::sort(arr.begin(), arr.end());
        for (int i = n-1; i>=0; i--) {
            if(arr[i] != arr.back()) {
                return arr[i];
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    std::vector<int> test_vector = {12, 35, 1, 10, 34, 1};
    int result = sol.getSecondLargest(test_vector);
    std::cout << "The second largest element is: " << result << std::endl;
    return 0;
}