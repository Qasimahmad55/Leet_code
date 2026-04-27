#include <string>
#include <unordered_set>

class Solution {
public:
    bool hasAllCodes(std::string s, int k) {
        int required_count = 1 << k; 
        
      
        if (s.length() < required_count - k - 1) {
            return false;
        }

        std::unordered_set<std::string> seen;

        for (int i = 0; i <= (int)s.length() - k; ++i) {
            seen.insert(s.substr(i, k));
            
            
            if (seen.size() == required_count) {
                return true;
            }
        }

        return seen.size() == required_count;
    }
};