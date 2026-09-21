class Solution:
    def minSubArrayLen(self, target: int, nums: list[int]) -> int:
        l, r = 0, 0
        curSum = 0
        best = 1000000
        while r < len(nums):
            curSum += nums[r]
            while curSum >= target:
                curSum -= nums[l]
                best = min(best, r - l + 1)
                l += 1
            r += 1
        
        return 0 if best == 1000000 else best