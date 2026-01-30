class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int charCount[26] = {0};
        for (char c : chars) {
            charCount[c - 'a']++;
        }
        
        int totalLength = 0;
        
        for (const string& word : words) {
            int wordCount[26] = {0};
            
            for (char c : word) {
                wordCount[c - 'a']++;
            }
            
            bool canForm = true;
            for (int i = 0; i < 26; i++) {
                if (wordCount[i] > charCount[i]) {
                    canForm = false;
                    break;
                }
            }
            
            if (canForm) {
                totalLength += word.length();
            }
        }
        
        return totalLength;
    }
};