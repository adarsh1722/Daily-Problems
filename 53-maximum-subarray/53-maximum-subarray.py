class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        
        Sum = 0
        maxx = -100000
        
        for i in nums:
            Sum += i;
            maxx = max(maxx , Sum);
            if(Sum < 0):
                Sum = 0;
        
        return maxx;
            
        
        