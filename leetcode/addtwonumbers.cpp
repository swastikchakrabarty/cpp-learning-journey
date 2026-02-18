#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    inline static bool speedup = [](){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        return 0;}();

    
        struct ListNode {
            int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Fast I/O for competitive programming
        

        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int val1 = (l1 != nullptr) ? l1->val : 0;
            int val2 = (l2 != nullptr) ? l2->val : 0;
            
            // Calculate sum and carry
            int sum = val1 + val2 + carry;
            carry = sum / 10;
            
            // Create new node with the digit
            curr->next = new ListNode(sum % 10);
            curr = curr->next;

            // Move to next nodes if they exist
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        return dummy->next;
    }
};

int main() {
    
    return 0;
}

//STill need to implement the input and output part for testing the solution.
//I did not fully understand the problem statement, so I will implement the input and output part later after understanding the problem statement.