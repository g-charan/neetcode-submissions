class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        res = 0

        for i in range(len(prices)):
            for j in range(len(prices[i:])):
                maxProfit = prices[i + j] - prices[i]
                res = max(res, maxProfit)
        
        return res