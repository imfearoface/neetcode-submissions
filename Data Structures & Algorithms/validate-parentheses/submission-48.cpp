class Solution {
public:
    bool isValid(string s)
    {
        vector<char> stack_;

        for(auto c:s)
        {
            if      (c == '(') { stack_.push_back(')'); }
            else if (c == '[') { stack_.push_back(']'); }
            else if (c == '{') { stack_.push_back('}'); }
            else
            {
                if (stack_.empty() ||
                    stack_.back() != c)
                    { return false; }
                stack_.pop_back();
            }
        }
        return stack_.empty();
    }
};
