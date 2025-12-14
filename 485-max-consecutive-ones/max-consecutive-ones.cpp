class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int Cmax = 0;
        int max_count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1)
                Cmax++;
            else {
                max_count=max(Cmax,max_count);
                Cmax=0;
            }
        }
        max_count=max(Cmax,max_count);
        return max_count;
    }
};