#include<bits/stdc++.h>
using namespace std;

#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // Fast I/O for competitive programming
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int k = 0; // Pointer for elements not equal to val
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                // Overwrite the element at position k with the non-val element
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k; // Return the count of elements not equal to val
    }
};