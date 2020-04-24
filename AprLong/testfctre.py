mod = 1e9+7

n1 = {2:2,3:1,5:4,23:1}
n2 = {2:1,5:1,7:2}

def comb(n1,n2):
    n3 = {}
    for key in n2:
        if key in n1: n3[key] = n2[key]+n1[key]
        else: n3[key] = n2[key]
    for key in n1:
        if key not in n2: n3[key] = n1[key]

    return n3

def nf(n):
    ans = 1
    for key in n:
        ans*=(n[key]+1)
        ans%=mod
    return int(ans)

print(comb(n1,n2))
print(nf(comb(n1, n2)))
