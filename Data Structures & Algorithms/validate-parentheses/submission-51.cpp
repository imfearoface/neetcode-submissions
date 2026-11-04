class Solution {
public:
    bool isValid(string s)
    {
        vector<char> stack_;
        
        for(char c: s)
        {
            switch(c)
            {
                case '(':
                        stack_.push_back(')');
                        break;
                case '[':
                        stack_.push_back(']');
                        break;
                case '{':
                        stack_.push_back('}');
                        break;
                default:
                        if(!stack_.empty() && c == stack_.back())
                        {
                        stack_.pop_back();
                        } else 
                        {
                            return false;
                        }
                        break;
            }
        }
        return stack_.empty();
    }
};
