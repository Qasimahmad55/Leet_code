class MyCircularQueue {
private:
    int* data;
    int front;
    int count;
    int capacity;
    
public:
    MyCircularQueue(int k) {
        data = new int[k];
        front = 0;
        count = 0;
        capacity = k;
    }
    
    bool enQueue(int value) {
        if (isFull()) return false;
        
        int rear = (front + count) % capacity;
        data[rear] = value;
        count++;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) return false;
        
        front = (front + 1) % capacity;
        count--;
        return true;
    }
    
    int Front() {
        if (isEmpty()) return -1;
        return data[front];
    }
    
    int Rear() {
        if (isEmpty()) return -1;
        int rear = (front + count - 1) % capacity;
        return data[rear];
    }
    
    bool isEmpty() {
        return count == 0;
    }
    
    bool isFull() {
        return count == capacity;
    }
    
    ~MyCircularQueue() {
        delete[] data;
    }
};