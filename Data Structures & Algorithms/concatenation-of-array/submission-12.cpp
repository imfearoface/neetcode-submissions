class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums)
    {
        auto size = nums.size();
        auto size_ = 2 * size;
        vector<int> arr(size_);
        
        for(int i = 0; i <= size_ - 1; i++)
        {
            if(i <= (size - 1))
            {
                arr[i] = nums[i];
            }
            else
            {
                arr[i] = nums[i - (size)];
            }
        }
        return arr;
    }
};
