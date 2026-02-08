class MinStack {
private:
    stack<long long> st;
    long long minVal;
    
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if (st.empty()) {
            st.push(0);
            minVal = val;
        } else {
            st.push((long long)val - minVal);
            if (val < minVal) {
                minVal = val;
            }
        }
    }
    
    void pop() {
        if (st.empty()) return;
        
        long long top = st.top();
        st.pop();
        
        if (top < 0) {
            minVal = minVal - top;
        }
    }
    
    int top() {
        long long top = st.top();
        
        if (top < 0) {
            return minVal;
        }
        return minVal + top;
    }
    
    int getMin() {
        return minVal;
    }
};
