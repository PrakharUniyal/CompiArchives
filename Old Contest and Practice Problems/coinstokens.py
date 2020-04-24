nums=[0]
for i in range(1,1001):
    sum=0
    for j in range(1,int(i**(1/2)+1)):
        if (i%j)==0: 
            if j!=(i/j): sum+=(j+(i/j))
            else: sum+=j
    sum-=(i+1)
    nums.append((max(i,int(sum))))

def cutRod(price, n): 
    val = [0 for x in range(n+1)] 
    val[0] = 0

    for i in range(1, n+1): 
        max_val = -1
        for j in range(i):max_val = max(max_val, price[j] + val[i-j-1]) 
        val[i] = max_val 
  
    return val[n] 

q=int(input())
for _ in range(q):
    n=int(input())
    print(cutRod(nums[1:n+1],n))