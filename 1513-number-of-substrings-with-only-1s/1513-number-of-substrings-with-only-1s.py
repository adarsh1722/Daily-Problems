class Solution:
    def numSub(self, s: str) -> int:
        res = currSum = 0
        for digit in s:
            if digit == '0':
                currSum = 0
            else:
                currSum += 1
                res = res + currSum
        return res % (10**9 + 7)
            
        