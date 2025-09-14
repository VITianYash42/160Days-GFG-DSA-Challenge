                                                      // DAY 4 - "ROTATE ARRAY" //

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
  public:

    void rotateArr(std::vector<int>& arr, int d) {
        int n = arr.size();
        if ( n== 0) { 
        return;
        }
        d = d % n;
        std::rotate(arr.begin(), arr.begin() + d, arr.end());
    }    
};

int main() {
    Solution S;
    std::vector<int> test_vector = {1, 2, 3, 4, 5, 6, 7};
    int d = 2;
    S.rotateArr(test_vector, d);
    std::cout << "Rotated array:  ";
    for (int num : test_vector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}