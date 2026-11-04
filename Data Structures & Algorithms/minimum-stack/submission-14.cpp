class MinStack {
private:
vector<int> s;
vector<int> min_;
public:
    MinStack() {} 
    
    void push(int val) 
    {
        s.push_back(val);
        if (min_.empty()) {min_.push_back(val);}
        else {min_.push_back(min(val, min_.back()));}
    }
    
    void pop() 
    {
        s.pop_back();
        min_.pop_back();
    }
    
    int top() 
    {
        return s.back();
    }
    
    int getMin() 
    {
        return min_.back();
    }
};
