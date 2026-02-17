#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void findMaxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int current_sum = 0;
        
        int start = 0;
        int end = 0;
        int temp_start = 0;

        for (int i = 0; i < nums.size(); i++) {
            current_sum += nums[i];

            if (current_sum > max_sum) {
                max_sum = current_sum;
                start = temp_start;
                end = i;
            }

            if (current_sum < 0) {
                current_sum = 0;
                temp_start = i + 1;
            }
        }

        cout << "Maximum Sum: " << max_sum << endl;
        cout << "Indices: [" << start << ", " << end << "]" << endl;
        cout << "Subarray: ";
        for (int i = start; i <= end; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    sol.findMaxSubArray(nums);
    return 0;
}