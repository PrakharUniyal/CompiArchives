import math

t = int(input())
while t>0:
    x = input().split()

    a = int(x[0])
    b = int(x[1])

    d = abs(a-b)

    ans = 0

    for i in range(1, int(math.sqrt(d) + 1)) : 
        if (d % i == 0) : 
            if (d / i == i) : 
                ans+=1
            else : 
                ans+=2

    print(ans)
    t-=1