class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n_size = nums.size();
        int ans_size = n_size * 2;
        vector<int> ans(ans_size);
        for(int i = 0; i < ans_size; i++)
        {
            if(i <= n_size -1)
            {
                ans[i] = nums[i];
            } else
            {
                ans[i] = nums[i - n_size];
            }
        }
    return ans;

    }
};