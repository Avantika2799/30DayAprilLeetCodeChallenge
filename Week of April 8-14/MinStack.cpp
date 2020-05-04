/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/529/week-2/3292/
*/

//I used vector and performed the STL functions


class MinStack {
public:
    /** initialize your data structure here. */
        vector<int>v;
    int mini_elem;
    
    MinStack() {
        mini_elem=INT_MAX;
    }

    void push(int x) {
        v.push_back(x);
    }
    
    void pop() {
         v.pop_back();
    }
    
    int top() {
        return v[v.size()-1];
    }
    
    int getMin() {
        return *min_element(v.begin(),v.end());
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
