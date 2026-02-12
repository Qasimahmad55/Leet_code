class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int balance = 0;
        string temp = "";

        for (char c : s) {
            if (c == '(') {
                balance++;
            } else if (c == ')') {
                if (balance == 0)
                    continue;
                balance--;
            }
            temp += c;
        }

        string result = "";
        balance = 0;

        for (int i = temp.length() - 1; i >= 0; i--) {
            if (temp[i] == ')') {
                balance++;
            } else if (temp[i] == '(') {
                if (balance == 0)
                    continue;
                balance--;
            }
            result += temp[i];
        }

        reverse(result.begin(), result.end());
        return result;
    }
};