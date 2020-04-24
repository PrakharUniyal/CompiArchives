import random
import math

f = open("input.txt","w")

f.write("1000000\n")
for i in range(1000000):
    x = "0 "*(6-len(str(i)))
    for j in range(len(str(i))):
        x+= str(i)[j]+" "
    
    # for i in range(500):
    #     x+=(str(int(random.random()*10))[0]+" ")
    f.write("6\n")
    f.write(x+"\n")

f.close()