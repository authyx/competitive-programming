class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int bp = 0;
        int r = 0;
        int l = 0;
        while (r < prices.size())
        {
            if(prices[r] < prices[l])
                l = r;
            else
            {
                if ((prices[r] - prices[l]) > bp)
                    bp = prices[r] - prices[l];
            }
            r++;
        }
        return bp;
    }
};