r=int(input())
if r%2==0: print("NO")
else:
    if r==1 or r==3: print("NO")
    else: print(1,int((r-3)/2))