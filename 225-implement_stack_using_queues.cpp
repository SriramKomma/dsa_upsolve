class MyStack {
    private:
        std::stack<int> data; 
    public:
        MyStack() {
            
        }
        
        void push(int x) {
            data.push(x);
        }
        
        int pop() {
            int popEle = data.top();
            data.pop();
            return popEle;
        }
        
        int top() {
            return data.top();
            
        }
        
        bool empty() {
            return data.empty();
        }
    };
    
    /**
     * Your MyStack object will be instantiated and called as such:
     * MyStack* obj = new MyStack();
     * obj->push(x);
     * int param_2 = obj->pop();
     * int param_3 = obj->top();
     * bool param_4 = obj->empty();
     */