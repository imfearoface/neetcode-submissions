class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        auto count = 0;
        for(auto num : nums)
        {
            if(num != val)
            {
                nums[count] = num;
                count++;
            }
        }
        return count;
    }
};