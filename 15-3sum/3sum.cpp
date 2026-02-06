class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            
            unordered_set<int> seen;
            for (int j = i + 1; j < nums.size(); j++) {
                int complement = -nums[i] - nums[j];
                
                if (seen.count(complement)) {
                    result.push_back({nums[i], complement, nums[j]});
                    while (j + 1 < nums.size() && nums[j] == nums[j+1]) j++;
                }
                seen.insert(nums[j]);
            }
        }
        
        return result;
    }
};