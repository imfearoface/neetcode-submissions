class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, max = 0, length = 0;

        length = nums.size();

        for(int i = 0; i < length; i++){
            if(nums[i] == 1){
                count++;
                if (max < count) {
                    max = count;
                }
            } else if(nums[i] == 0) {
                if(count > max){
                    max = count;
                }
                count = 0;
            }
        }

        if(count > max) {
            max = count;
        }

        return max;
    }
};