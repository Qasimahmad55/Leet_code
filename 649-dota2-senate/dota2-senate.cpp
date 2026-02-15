class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> radiant, dire;
        int n = senate.length();
        
        // Store indices of each party's senators
        for (int i = 0; i < n; i++) {
            if (senate[i] == 'R') {
                radiant.push(i);
            } else {
                dire.push(i);
            }
        }
        
        // Simulate voting rounds
        while (!radiant.empty() && !dire.empty()) {
            int r = radiant.front();
            int d = dire.front();
            radiant.pop();
            dire.pop();
            
            // Senator with smaller index votes first
            if (r < d) {
                // Radiant bans Dire, Radiant gets to vote again
                radiant.push(r + n);  // Add n for next round
            } else {
                // Dire bans Radiant, Dire gets to vote again
                dire.push(d + n);
            }
        }
        
        return radiant.empty() ? "Dire" : "Radiant";
    }
};