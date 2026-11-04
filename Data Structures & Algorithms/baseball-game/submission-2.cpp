class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> stack;

        for(int i = 0; i < operations.size(); i++)
        {
            switch(operations[i][0]) 
            {
                case '+':
                    stack.push_back(stack[stack.size()-1] + 
                                    stack[stack.size()-2]);
                    break;
                case 'D':
                    stack.push_back(stack[stack.size()-1] * 2); 
                    break;
                case 'C':
                    stack.pop_back();  
                    break;
                default:
                    stack.push_back(stoi(operations[i]));  
                    break;
            }
        }

        int sum = 0;
        for(int score : stack)
        {
            sum += score;
        }
        return sum;
    }
};