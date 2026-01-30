class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> letters(sentence.begin(), sentence.end());
        
        return count_if(letters.begin(), letters.end(), 
                       [](char c) { return c >= 'a' && c <= 'z'; }) == 26;
    }
};