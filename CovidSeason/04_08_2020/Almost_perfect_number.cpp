//
// Created by Duc Bui on 2020-08-08.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define int long long

int divSum(int n)
{
    if(n == 1)
        return 1;

    // Sum of divisors
    int result = 0;

    // find all divisors which divides 'num'
    for (int i = 2; i <= sqrt(n); i++)
    {
        // if 'i' is divisor of 'n'
        if (n % i == 0)
        {
            // if both divisors are same
            // then add it once else add
            // both
            if (i == (n / i))
                result += i;
            else
                result += (i + n/i);
        }
    }

    // Add 1 and n to result as above loop
    // considers proper divisors greater
    // than 1.
    return (result + n + 1)-2*n;
}

signed main(){
   int n;
   cin>>n;
   for(int i = 0; i < n; i++)
   {
       int temp;
       cin>>temp;
       divSum(temp) >= 0 ? cout<<"1\n" : cout<<"0\n";
   }
}
