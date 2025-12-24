class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewel_set(jewels.begin(), jewels.end());
        int result = 0;
        for (char stone : stones) {
            if(jewel_set.count(stone))
            result++;
        }
        return result;
    }
};