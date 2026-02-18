#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Fast I/O for competitive programming
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        // Map to store the last index of each character (ASCII 0-255)
        vector<int> lastPos(256, -1);
        
        int maxLength = 0;
        int left = 0;

        for (int right = 0; right < s.length(); right++) {
            // If character was seen before and is within current window
            if (lastPos[s[right]] >= left) {
                // Move left pointer to skip the duplicate
                left = lastPos[s[right]] + 1;
            }
            
            // Update last seen position of the character
            lastPos[s[right]] = right;
            
            // Calculate window length and update max
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};