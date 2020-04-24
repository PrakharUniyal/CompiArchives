import math

m,n,p=input().split()
if m==0: print(1)
else:	
	g=math.gcd(int(m),int(n))
	l=int(n)//g
	print(1+(int(p)//l))