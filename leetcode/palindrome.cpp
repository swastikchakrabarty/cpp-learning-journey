#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        inline static bool speedup = [](){
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            cout.tie(NULL);
            return 0;}();
        
    bool isPalindrome(int x) {
        // Fast I/O for competitive programming

        // Negative numbers are not palindromes
        if (x < 0) return false;

        // Convert number to string
        string s = to_string(x);
        int left = 0, right = s.length() - 1;

        // Check characters from both ends towards the center
        while (left < right) {
            if (s[left] != s[right]) {
                return false; // Not a palindrome
            }
            left++;
            right--;
        }

        return true; // It's a palindrome
    }
};