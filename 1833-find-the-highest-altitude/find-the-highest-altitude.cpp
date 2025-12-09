class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int minAl=0;
        int maxAl=0;
        for (int i=0;i<gain.size();i++)
        {
            minAl +=gain[i];
            maxAl= max(maxAl,minAl);
        }
        return maxAl;
    }
};