from itertools import permutations

n = int(input())
s= input()
ss = s.split()
sx = [int(ss[i]) for i in range(len(ss)) if i%2==0]
si = [ss[i] for i in range(len(ss)) if i%2]

l = n-1

st = '+'*l

ans=200

for i in range(n):
    st = ('-'*(i))+st[i:]
    permList = list(permutations(st))
    for j in range(len(permList)):
        sum=sx[0]
        cnt = 0
        for k in range(len(permList[j])):
            if permList[j][k]=='+':
                sum+=abs(sx[k+1])
            else:
                sum-=abs(sx[k+1])
        
        
        if sum==0:
            for p in range(len(sx)-1):
                if(si[p]!=st[p]):
                    cnt+=1
            ans=min(ans,cnt)
if(ans==200): ans=-1
print(ans)