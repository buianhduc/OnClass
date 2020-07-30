import string
digs = string.digits + string.ascii_letters


def int2base(x, base):
    if x < 0:
        sign = -1
    elif x == 0:
        return digs[0]
    else:
        sign = 1

    x *= sign
    digits = []

    while x:
        digits.append(digs[int(x % base)])
        x = int(x / base)

    if sign < 0:
        digits.append('-')

    digits.reverse()

    return ''.join(digits)

def Factorial(num):
    if(num == 0 or num == 1): return 1
    else: return Factorial(num-1)*num

def countZeros(s):
    count = 0
    for i in range(len(s)-1,0,-1): 
        if (s[i] != '0'):
            return count
        else: 
            count += 1

n = int(input())
b = int(input())

print(countZeros(int2base(Factorial(n),b)))



