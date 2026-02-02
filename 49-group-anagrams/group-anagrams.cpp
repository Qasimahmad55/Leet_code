class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;
        
        for (string& str : strs) {
            int count[26] = {0};
            for (char c : str) {
                count[c - 'a']++;
            }
            
            string key;
            key.reserve(52); 
            for (int i = 0; i < 26; i++) {
                if (count[i] > 0) {
                    key += char('a' + i);
                    key += to_string(count[i]);
                }
            }
            
            anagramGroups[key].push_back(move(str));
        }
        
        vector<vector<string>> result;
        result.reserve(anagramGroups.size());
        for (auto& pair : anagramGroups) {
            result.push_back(move(pair.second));
        }
        
        return result;
    }
};