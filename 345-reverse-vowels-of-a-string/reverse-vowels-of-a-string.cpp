class Solution {
public:
    bool isVowel(char v) {
        if (v == 'A' || v == 'E' || v == 'I' || v == 'O' || v == 'U' ||
            v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;
        while (i < j) {
            if (!isVowel(s[i]))
                i++;
            else if (!isVowel(s[j]))
                j--;
            else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};