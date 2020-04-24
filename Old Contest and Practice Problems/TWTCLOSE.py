n,k=map(int,input().split())
t=[0]*n
for i in range(k):
    c=input().split()
    if c[0]=="CLOSEALL": t=[0]*n
    else: t[int(c[1])-1]^=1
    print(sum(t))