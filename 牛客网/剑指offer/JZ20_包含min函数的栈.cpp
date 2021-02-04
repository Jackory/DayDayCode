class Solution {
public:
    stack<int> minVal;
    stack<int> val;
    void push(int value) {
        val.push(value);
        if (minVal.empty() || value < minVal.top())
            minVal.push(value);
        else {
            minVal.push(minVal.top());
        }
        
    }
    void pop() {
        minVal.pop();
        val.pop();
    }
    int top() {
        return val.top();
    }
    int min() {
        return minVal.top();
    }
};