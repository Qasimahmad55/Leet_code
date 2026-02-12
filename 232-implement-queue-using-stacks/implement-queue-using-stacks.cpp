class MyQueue {
private:
    stack<int> s1;  // Main stack
    stack<int> s2;  // Helper stack
    
public:
    MyQueue() {
        
    }
    
    // O(n) - transfer all elements
    void push(int x) {
        // Move all elements from s1 to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        
        // Push new element to s1
        s1.push(x);
        
        // Move everything back to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    // O(1)
    int pop() {
        int front = s1.top();
        s1.pop();
        return front;
    }
    
    // O(1)
    int peek() {
        return s1.top();
    }
    
    // O(1)
    bool empty() {
        return s1.empty();
    }
};