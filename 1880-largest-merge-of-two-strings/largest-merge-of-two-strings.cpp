class Solution {
public:
    string largestMerge(string word1, string word2) {
        string merge = "";
        
        while (!word1.empty() && !word2.empty()) {
            if (word1 > word2) {
                merge += word1[0];
                word1 = word1.substr(1);
            } else {
                merge += word2[0];
                word2 = word2.substr(1);
            }
        }
        
        return merge + word1 + word2;
    }
};