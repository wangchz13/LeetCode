class Queue {
public:
    stack<int> s1,s2;
    void push(int x) {
        s1.push(x);
    }
    void pop(void) {
        peek();
        s2.pop();
    }
    int peek(void) {
        if(s2.empty()){
            while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
            }
        }
        return s2.top();
    }
    bool empty(void) {
        return s1.empty() && s2.empty();
    }
};