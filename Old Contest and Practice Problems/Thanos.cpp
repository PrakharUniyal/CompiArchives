n=int(input())
l=input().split()

for i in range(len(l)):
    l[i]=int(l[i])
    
i=1
flag=True
while(i<=n):
    for j in range(i):
        x=l[j*int(n//i):(j+1)*int(n//i)]
        if sorted(x)==x:
            flag=False
            break
    if(flag==False):
        break
    i*=2
        
print(n//i)    