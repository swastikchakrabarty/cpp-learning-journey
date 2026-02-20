#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        // Fast I/O for competitive programming
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        stack<char> st;

        for (char c : s) {
            // Push opening brackets onto the stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                // If we see a closing bracket but stack is empty, it's invalid
                if (st.empty()) return false;

                // Check for matching pairs
                if ((c == ')' && st.top() == '(') ||
                    (c == '}' && st.top() == '{') ||
                    (c == ']' && st.top() == '[')) {
                    st.pop();
                } else {
                    return false; // Mismatched bracket type
                }
            }
        }

        // If stack is empty, all brackets were matched correctly
        return st.empty();
    }
};