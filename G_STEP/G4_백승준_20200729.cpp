#include <vector>
#include <algorithm>

class MinStack {
public:
    vector<int> stack;
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int x) {
        stack.push_back(x);
    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        int min = stack[0], i;
        
        for(i=1; i<stack.size(); i++)
            if(min > stack[i])
                min = stack[i];
    
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
