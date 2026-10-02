class MyStack {
public:
    MyStack() {
        
    }
    queue<int> q1;
    queue<int> q2;
    int last=0;

    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int x=q1.size();
        for(int i=0;i<x-1;i++){
            q2.push(q1.front());
            q1.pop();
        }
        int f=q1.front();
        q1.pop();

        for(int i=0;i<x-1;i++){
            q1.push(q2.front());
            q2.pop();
        }
        return f;

    }
    
    int top() {
        if(q1.empty() && q2.empty()){
            return NULL;
        }else{
            int lu=q1.size();
            for(int i=0;i<lu-1;i++){
                q2.push(q1.front());
                q1.pop();
            }
            last=q1.front();
            q2.push(q1.front());
            q1.pop();

            for(int i=0;i<lu;i++){
                q1.push(q2.front());
                q2.pop();
            }
        }return last; 
    }


    bool empty() {
        if(q1.empty()){
            return true;
        }else{
            return false;
        }
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