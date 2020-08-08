from random import randint
from random import seed

seed(1)
f = open("output.txt")
n = int(input())
m = int(input())
p = randint(0,m)
f.write(str(n) + " " + str(m) + " " + str(p) + "\n")
for i in range(1,n+1):
    a = randint(0,m)
    b = randint(0,m)
    while( a == b):
        a = randint(0,m)
        b = randint(0,m)
    f.write(str(a) + " " + str(b) + "\n")
