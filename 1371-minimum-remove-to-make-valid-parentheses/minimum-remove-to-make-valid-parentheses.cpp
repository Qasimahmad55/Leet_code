class Solution {
public:
    string minRemoveToMakeValid(string s) {
        unordered_set<int> toRemove;
        stack<int> st;
        
        // First pass: Find indices of invalid parentheses
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else if (s[i] == ')') {
                if (!st.empty()) {
                    st.pop();  // Matched
                } else {
                    toRemove.insert(i);  // Invalid ')'
                }
            }
        }
        
        // Remaining in stack are unmatched '('
        while (!st.empty()) {
            toRemove.insert(st.top());
            st.pop();
        }
        
        // Build result excluding invalid indices
        string result = "";
        for (int i = 0; i < s.length(); i++) {
            if (toRemove.find(i) == toRemove.end()) {
                result += s[i];
            }
        }
        
        return result;
    }
};