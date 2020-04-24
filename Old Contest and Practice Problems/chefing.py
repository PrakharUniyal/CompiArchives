t=int(input())
while t>0:
    c={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}
    
    n=int(input())
    flag=False
    
    while n>0:
    
        s=set(input())
        c=s & c
        
        if len(c)==0:
            print(0)
            flag=True
            break
            
        n-=1
    if not(flag):
        print(len(c))
    
    t-=1