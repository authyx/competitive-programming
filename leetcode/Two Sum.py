# https://leetcode.com/problems/two-sum/


class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        seen = {}
        for i, n in enumerate(nums):
            devide = target - n
            if devide in seen:
                return [seen[devide], i]
            seen[n] = i
        return []