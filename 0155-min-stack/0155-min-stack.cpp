class MinStack {
public:
    vector<int> ans;
    MinStack() {
        
    }
    
    void push(int val) {
        ans.push_back(val);
    }
    
    void pop() {
        ans.erace(ans.end());
    }
    
    int top() {
        return ans[size()-1];
    }
    
    int getMin() {
        return *min_element(ans.begin(),ans.end());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */