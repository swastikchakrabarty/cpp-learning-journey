#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            // Calculate current width
            int width = right - left;
            
            // Current height is limited by the shorter side
            int current_height = min(height[left], height[right]);
            
            // Update max_water if current area is larger
            max_water = max(max_water, width * current_height);

            // Move the pointer pointing to the shorter line
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return max_water;
    }
};




class Solution {
public:
    // This runs once before the test cases start
    inline static bool speedup = [](){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        return true;
    }();


    int maxArea(vector<int>& height) {
        int max_water = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            int h = min(height[left], height[right]);
            max_water = max(max_water, h * (right - left));

            // Pruning: Skip lines that are shorter than the current bottleneck
            while (left < right && height[left] <= h)
                left++;
            while (left < right && height[right] <= h)
                right--;
        }
        
        return max_water;
    }
};

int main() {
    Solution sol;
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Max Water: " << sol.maxArea(heights) << endl;
    return 0;
}