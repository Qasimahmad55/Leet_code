class MyStack {
private:
    queue<int> q;
    
public:
    MyStack() {
        
    }
    
    void push(int x) {
        int size = q.size();
        q.push(x);
        
        for (int i = 0; i < size; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int top = q.front();
        q.pop();
        return top;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};