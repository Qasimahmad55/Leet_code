class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       unordered_set<int> nums1set(nums1.begin(), nums1.end());
        unordered_set<int> nums2set(nums2.begin(), nums2.end());
        vector<int> ans1;
        vector<int> ans2;

        for (auto& num :nums1set)
        {
            if(nums2set.find(num)==nums2set.end())
            {
                ans1.push_back(num);
            }
        }

        for (auto& num :nums2set)
        {
            if(nums1set.find(num)==nums1set.end())
            {
                ans2.push_back(num);
            }
        }
        return {ans1,ans2};
    }

};