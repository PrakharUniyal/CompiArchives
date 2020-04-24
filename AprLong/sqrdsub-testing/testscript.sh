python3 testgen.py
g++ sqrdsub.cpp -o sqrdsub && ./sqrdsub
g++ sqrdsub2.cpp -o sqrdsub2 && ./sqrdsub2
diff output.txt output2.txt > diff.txt