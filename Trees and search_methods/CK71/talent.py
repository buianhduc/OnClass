a,b = input().split(' ')
a = int(a)
b = int(b)
d = input().split(' ')
w = input().split(' ')
p = []
for i in range(b):
    p.append(int(input()))
d = [int(i) for i in d]
w = [int(i) for i in w]

for i in p:
    sum = 0
    for j in range(a):
        sum += w[j]*abs(d[j] - i)
    print(sum)