#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        
        // it1 moves from the start to the end of the vector
        for (auto it1 = nums.begin(); it1 != nums.end(); ++it1) {
            
            // find searches for (target - value at it1) starting from the next element
            auto it2 = find(it1 + 1, nums.end(), target - *it1);
            
            // If it2 is not nums.end(), a match was found
            if (it2 != nums.end()) {
                // Calculate index by finding the distance from the beginning
                result.push_back(it1 - nums.begin());
                result.push_back(it2 - nums.begin());
                break;
            }
        }
        return result;
    }
};
//Time complexity: O(n^2) in the worst case due to the nested loop (find is O(n) and it runs for each element).
//Space complexity: O(1) since we are using only a constant amount of extra space




class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Map to store {value, index}
        unordered_map<int, int> mp; 
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Check if the complement already exists in the map
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            
            // If not found, store the current number and its index
            mp[nums[i]] = i;
        }
        return {}; // Return empty if no solution
    }
};

//Time complexity: O(n) because we traverse the list once and each lookup in the map is O(1).
//Space complexity: O(n) in the worst case if all elements are unique and stored in the map.



int main() {
    Solution sol;
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> indices = sol.twoSum(numbers, target);

    if (!indices.empty()) {
        cout << "Indices: " << indices[0] << ", " << indices[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}