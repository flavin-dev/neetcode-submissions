class MyStack {
public:
stack<int>st;
    MyStack() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        int x=st.top();
        st.pop();
        return x;
        
    }
    
    int top() {
        return st.top();
    }
    
    bool empty() {
        return st.empty();
    }
};
