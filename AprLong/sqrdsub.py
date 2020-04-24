for t in range(int(input())):
    n = int(input())
    a = input().split()
    a = [int(a[i]) for i in range(len(a))]

    ev = [-1]
    de = [0]

    for i in range(n):
        if(a[i]%2==0):
            ev.append(i)
            de.append(a[i]%4)

    ev.append(n)
    de.append(0)

    ans = 0
    for i in range(1,len(ev)-1):
        if(de[i]==2):
            ans += (ev[i]-ev[i-1])*(ev[i+1]-ev[i])

    tot = n*(n+1)/2

    ans = tot - ans

    print(int(ans))