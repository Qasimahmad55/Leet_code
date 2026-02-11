class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        
        for (char c : s) {
            if (c == '(') {
                st.push(c);
            } else {  // c == ')'
                if (!st.empty() && st.top() == '(') {
                    st.pop();  // Matched pair
                } else {
                    st.push(c);  // Unmatched ')'
                }
            }
        }
        
        return st.size();  // Remaining unmatched parentheses
    }
};