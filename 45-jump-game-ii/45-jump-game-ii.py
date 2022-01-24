class Solution(object):
    def jump(self, nums):
        
        #Time Complexity = O(n)
        #Space Complexity = O(1)
        
        maxReach , steps , jump = nums[0] , nums[0] , 1
        
        if(len(nums) <= 1):
            return 0;
        
        if(nums[0] == 0):
            return 0
        
        for i in range(1 , len(nums)):
            if (i == len(nums) - 1):
                return jump
            maxReach = max(maxReach , i + nums[i])
            steps -= 1
            if (steps == 0):
                jump+=1
                steps = maxReach - i
                
        return jump
                
            
       
        