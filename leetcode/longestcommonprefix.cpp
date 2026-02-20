#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Fast I/O for competitive programming
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        if (strs.empty()) return "";

        // Start by assuming the first string is the prefix
        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            // Shorten prefix until it matches the start of strs[i]
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.size() - 1);
                
                // If prefix becomes empty, there is no common match
                if (prefix.empty()) return "";
            }
        }

        return prefix;
    }
};