                                                      // DAY 5 - "NEXT PERMUTATION" //

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
  public:
    void nextPermutation(std::vector<int>& arr) {
        // code here
        int n = arr.size();
        int pivot = -1;
        for (int i = n-2; i>=0; i--) {
            if(arr[i] < arr[i+1]) {
                pivot = i;
                break;
            }
        }
        if (pivot == -1) {
        std::reverse(arr.begin(), arr.end());
        return;
        }
        int pivot_2 = -1;
        for (int i = n-1; i>pivot; i--) {
            if (arr[pivot] < arr[i]) {
                pivot_2 = i;
                break;
            }
        }
        std::swap(arr[pivot], arr[pivot_2]);
        std::reverse(arr.begin() + pivot +1, arr.end());
    }
};

int main() {
    Solution S;
    std::vector<int> test_vector = {1, 3, 5, 4, 2};
    S.nextPermutation(test_vector);
    
    // 5. Print the new vector to see the result
    std::cout << "Next permutation:     ";
    for (int num : test_vector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}