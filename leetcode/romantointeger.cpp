#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Helper function using switch for O(1) lookup
    int getValue(char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

    int romanToInt(string s) {
        // Fast I/O hack
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int total = 0;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            int currentVal = getValue(s[i]);
            
            // Subtraction logic: if next value is larger, subtract current
            if (i + 1 < n && currentVal < getValue(s[i+1])) {
                total -= currentVal;
            } else {
                total += currentVal;
            }
        }
        return total;
    }
};

