class MyQueue {
private:
    stack<int> input;
    stack<int> output;
public:
    MyQueue() {
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(output.empty())
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        int top = output.top();
        output.pop();
        return top;
    }
    
    int peek() {
        if(output.empty())
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        return output.top();
    }
    
    bool empty() {
        if(!output.empty() || !input.empty())
            return 0;
        
        return 1;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */