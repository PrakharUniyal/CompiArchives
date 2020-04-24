fib := list(1,1)
for(x,2,21,fib append(fib at (x-1) + fib at (x-2)))
n := File standardInput readLine

ind := list("1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20");
for(x,0,20,if(ind at (x) == n,fib at (x+1) println))