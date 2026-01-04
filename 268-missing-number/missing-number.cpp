class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum_n=n*(n+1)/2;
        int array_sum=accumulate(nums.begin(),nums.end(),0);
        return sum_n-array_sum;
    }
};