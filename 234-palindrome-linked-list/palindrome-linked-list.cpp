class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode* curr = head;
        
        // Push all values to stack
        while (curr) {
            st.push(curr->val);
            curr = curr->next;
        }
        
        // Compare with list from beginning
        curr = head;
        while (curr) {
            if (curr->val != st.top()) {
                return false;
            }
            st.pop();
            curr = curr->next;
        }
        
        return true;
    }
};