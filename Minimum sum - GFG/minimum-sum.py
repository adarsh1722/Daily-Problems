#User function Template for python3

class Solution:
    def solve(self, arr, n):
        
        arr.sort()
        a = ""
        b = ""
        for i in range(n):
            if i%2 == 0:
                a += str(arr[i])
            else:
                b += str(arr[i])
        
        if b!= "" and a != "":
            c = int(a) + int(b)
        else:
            if(a == ""):
                c = int(b)
            elif( b==""):
                c = int(a)
            else:
                c =""
        
        return str(c)
        

#{ 
#  Driver Code Starts
#Initial Template for Python 3



if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.solve(arr, n)
        print(ans)
        tc -= 1

# } Driver Code Ends