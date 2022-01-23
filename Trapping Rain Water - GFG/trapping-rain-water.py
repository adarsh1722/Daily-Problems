
class Solution:
    def trappingWater(self, arr,n):
        left = leftmax = rightmax = amount = 0
        right = n - 1
        
        while left <= right:
            if(arr[left] <= arr[right]):
                if arr[left] > leftmax : 
                    leftmax = arr[left]
                else:
                    amount += leftmax - arr[left]
                left += 1
            else:
                if(arr[right] > rightmax):
                    rightmax = arr[right]
                else:
                    amount += rightmax - arr[right]
                right -= 1
                
        return amount
                

#{ 
#  Driver Code Starts
#Initial Template for Python 3

import math



def main():
        T=int(input())
        while(T>0):
            
            n=int(input())
            
            arr=[int(x) for x in input().strip().split()]
            obj = Solution()
            print(obj.trappingWater(arr,n))
            
            
            T-=1


if __name__ == "__main__":
    main()



# } Driver Code Ends