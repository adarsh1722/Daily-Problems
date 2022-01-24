#User function Template for python3

def minSwap (arr, n, k) : 
    
    count = 0
    
    for i in range(n):
        if arr[i] <= k:
            count += 1
    
    bad = 0
    
    for i in range(count):
        if arr[i] > k:
            bad += 1
    
    ans = bad
    
    j = count
    
    for i in range(n - count ):
        
        # if j == n:
        #     break;
        
        if arr[i] > k: #decreasing count from previous window
            bad -= 1
        
        if arr[j] > k: #increasing count of current window
            bad += 1
        
        j += 1
        
        ans = min(ans , bad)
    
    return ans
        
        
    



#{ 
#  Driver Code Starts
#Initial Template for Python 3

for _ in range(0,int(input())):
    n = int(input())
    arr = list(map(int, input().strip().split()))
    k = int(input())
    ans = minSwap(arr, n, k)
    print(ans)
    





# } Driver Code Ends