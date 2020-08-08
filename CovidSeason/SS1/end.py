def gcd(a,b): 
      
    # Everything divides 0  
    if (b == 0): 
         return a 
    return gcd(b, a%b)
# def find_lcm(num1, num2): 
#     if(num1>num2): 
#         num = num1 
#         den = num2 
#     else: 
#         num = num2 
#         den = num1 
#     rem = num % den 
#     while(rem != 0): 
#         num = den 
#         den = rem 
#         rem = num % den 
#     gcd = den 
#     lcm = int(int(num1 * num2)/int(gcd)) 
#     return lcm 
# def Factorial(num):
#     if(num == 0 or num == 1): return 1
#     else: return Factorial(num-1)*num
    
# def solve(n):
#     arr = []
#     for i in range(1,n+1):
#         arr.append(i)
#     num1 = arr[0] 
#     num2 = arr[1] 
#     lcm = find_lcm(num1, num2) 
#     for i in range(2,len(arr)):
#         lcm = find_lcm(lcm,arr[i])
#     return lcm
def simplify(n):
    while(n%10 == 0):
        n = n//10
    n = n//10
    return n%10
def solve(n):
    dp = [1,2]
    last = 2
    for i in range(3,n+1): 
        if(dp[len(dp)-1] % i != 0):
            dp.append((dp[len(dp)-1]*i)//gcd(dp[len(dp)-1],i))
        else:
            dp.append(dp[len(dp)-1])
    return dp;
f = open("output.txt", "w")
# n = int(input())
arr = solve(100000)
for i in range(2,10000):
    f.write(str(i) + "\t" + str(arr[i-1]) + "\n")
f.close()