n=int(input())
s1=input().split()
s2=input().split()

s1=[int(i) for i in s1]
s2=[int(i) for i in s2]
sm=[max(s1[i],s2[i]) for i in range(n)]

for i in range(n):
    if s1[i]!=sm[i]: s1[i]=0
    if s2[i]!=sm[i]: s2[i]=0

s=[[s1[i],i,1] for i in range(n)]+[[s2[i],i,2] for i in range(n)]
sr=sorted(s,reverse=True)
sum=0
pos=[0]*n
for i in range(2*n):
    if(sr[i][1]==0 or sr[i][1]==n-1 or pos[sr[i][1]-1]*pos[sr[i][1]+1]!=2):
        pos[sr[i][1]]=sr[i][2]
        sum+=sr[i][0]
        
print(sum)