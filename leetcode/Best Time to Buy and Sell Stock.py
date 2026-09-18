class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        
        max = 0
        r = 1
        l = 0
        while r < len(prices):
            subs = prices[r] - prices[l]
            if subs  >= max:
                max = subs
            if prices[l + 1] < prices[l]: # 0 1 2
                l += 1
            if prices[r] < prices[l]: # 2 1 3 0 4
                l = r
            r += 1
            


        return max