class MyQueue {
public:
stack<int> input;
stack<int> output;
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(output.size()!=0){
            int temp=output.top();
            output.pop();
            return temp;
        }
        else{
            while(input.size()!=0){
                int temp=input.top();
                input.pop();
                output.push(temp);
            }
            return pop();

        }
    }
    
    int peek() {
        if(output.size()!=0) return output.top();
        else{
            while(input.size()!=0){
                int temp=input.top();
                input.pop();
                output.push(temp);
            }
            return peek();
        }
        
    }
    
    bool empty() {
        if(input.size()==0 && output.size()==0) return true;
        else return false;
    }
};

