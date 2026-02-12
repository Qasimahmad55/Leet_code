class MyStack {
private:
    queue<int> q1;  // Main queue
    queue<int> q2;  // Helper queue
    
public:
    MyStack() {
        
    }
    
    // O(1)
    void push(int x) {
        q1.push(x);
    }
    
    // O(n) - move n-1 elements to q2
    int pop() {
        // Move all except last element to q2
        while (q1.size() >1) {
            q2.push(q1.front());
            q1.pop();
        }
        
        // Get the last element (top of stack)
        int top = q1.front();
        q1.pop();
        
        // Swap q1 and q2
        swap(q1, q2);
        
        return top;
    }
    
    // O(n)
    int top() {
        while (q1.size() >1) {
            q2.push(q1.front());
            q1.pop();
        }
        
        int topElement = q1.front();
        q2.push(q1.front());  // Don't forget to move it
        q1.pop();
        
        swap(q1, q2);
        
        return topElement;
    }
    
    // O(1)
    bool empty() {
        return q1.empty();
    }
};