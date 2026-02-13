class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        
        // Put all students in queue
        for (int student : students) {
            q.push(student);
        }
        
        int sandwichIndex = 0;
        int attempts = 0;  // Count consecutive failures
        
        while (!q.empty() && attempts <q.size()) {
            if (q.front() == sandwiches[sandwichIndex]) {
                // Student takes sandwich
                q.pop();
                sandwichIndex++;
                attempts = 0;  // Reset attempts
            } else {
                // Student goes to back of queue
                q.push(q.front());
                q.pop();
                attempts++;
            }
        }
        
        return q.size();
    }
};