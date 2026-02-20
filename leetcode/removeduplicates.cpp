#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // Edge case
        
        int i = 0; // Pointer for the last unique element found
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++; // Found a new unique number
                nums[i] = nums[j]; // Move it to the next available slot
            }
        }
        return i + 1; // k unique elements
    }
};

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        // Rearrange unique elements to the front
        auto it = unique(nums.begin(), nums.end());

        // Calculate the number of unique elements
        return distance(nums.begin(), it);
    }
};