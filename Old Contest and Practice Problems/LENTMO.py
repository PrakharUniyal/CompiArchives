# -*- coding: utf-8 -*-
"""
Created on Wed Jun 12 21:42:14 2019

@author: prakhar
"""

for _ in range(int(input())):
    n=int(input())
    l=input().split()
    l=[int(i) for i in l]
    k=int(input())
    x=int(input())
    
    r=[(i^x)-i for i in l]
    rs=sorted(r,reverse=True)
    p=len([i for i in rs if i>=0])
    
    if k==p: print(sum(l)+sum(rs[:p]))
    elif k>p:
        if sum(rs[:k])>0: print(sum(l)+sum(rs[:k]))
        else: print(sum(l))
    else:
        if p%k==0:
            print(sum(l)+sum(rs[:p]))
        else:
            if sum(rs[:k*((p//k)+1)])>0: print(sum(l)+sum(rs[:k*((p//k)+1)]))
            else: print(sum(l)+sum(rs[:k*(p//k)]))