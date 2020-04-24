for t in range(int(input())):
    n,k=map(int,(input().split()))
    
    l=input().split()
    l=[int(i) for i in l]
    
    ind=[i+1 for i in range(n) if l[i]%2==1]
    
    o=len(ind)
    
    if(k>o): print("NO")
    else:
        if(k%2 ^ o%2): print("NO")
        else:
            print("YES")
            for i in range(k-1):
                print(ind[i],end=" ")
            print(n)