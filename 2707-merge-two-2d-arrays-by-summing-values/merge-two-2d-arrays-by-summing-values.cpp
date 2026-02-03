class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int, int> mp;
        
        for (auto& pair : nums1) {
            mp[pair[0]] = pair[1];
        }
        
        for (auto& pair : nums2) {
            mp[pair[0]] += pair[1];
        }
    
        vector<vector<int>> result;
        for (auto& [id, val] : mp) {
            result.push_back({id, val});
        }
        
        return result;
    }
};