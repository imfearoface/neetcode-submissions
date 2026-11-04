class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        for num in range(len(nums)):
            for i in range(num + 1, len(nums)):
                if nums[i] == nums[num]:
                    return True
        return False