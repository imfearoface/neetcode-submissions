class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0, count = 0;
        for(int i : nums) {
            if(i == 0) {
                res = max(res, count);
                count = 0;
            } else {
                count++;
            }
        }
        return max(res, count);
    }
};