                                                // DAY 2 - "MOVE ALL ZEROES TO END" //

#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int non_zero = 0;
        for (int i = 0; i<n; i++) {
            if (arr[i] != 0) {
                arr[non_zero] = arr[i];
                non_zero += 1;
            }
        }
        for (int i = non_zero ; i < n; i++) {
            arr[i] = 0;
        }
    }   
}; 

int main() {
    Solution sol;
    std::vector<int> test_vector = {3, 5, 0, 0, 4, 0, 9};

    sol.pushZerosToEnd(test_vector);
    std::cout << "Modified array: ";
    for (int num : test_vector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}