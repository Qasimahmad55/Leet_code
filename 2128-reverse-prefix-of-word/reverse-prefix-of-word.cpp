class Solution {
public:
    string reversePrefix(string word, char ch) {
        // Find the first occurrence of ch
        int index = -1;
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == ch) {
                index = i;
                break;
            }
        }
        
        // If ch not found, return original string
        if (index == -1) {
            return word;
        }
        
        // Reverse from 0 to index using two pointers
        int left = 0;
        int right = index;
        while (left < right) {
            swap(word[left], word[right]);
            left++;
            right--;
        }
        
        return word;
    }
};