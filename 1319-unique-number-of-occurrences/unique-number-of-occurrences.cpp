class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int num : arr) {
            freq[num]++;
        }
        
        unordered_set<int> occurrences;
        for (auto& [value, count] : freq) {
            if (occurrences.count(count)) {
                return false;  
            }
            occurrences.insert(count);
        }
        
        return true;
    }
};