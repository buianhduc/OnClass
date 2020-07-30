#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

vector<int> sieve(int n, bool isPrime[])
{
    vector<int> result;
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i < n; i++)
    {
        isPrime[i] = true;
    }
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < n; j+=i)
            {
                isPrime[j] = false;
                
            }
            result.push_back(j);
        }
    }
}

vector<bool> solve(int a, int b, bool isPrime[])
{
    vector <bool> result(a+1,false);
    vector <int> primes = sieve(a,isPrime);
    for (int i = 0; primes[i] + primes[i+1]<a+1; i++)
    {
        result[primes[i] + primes[i + 1] + 1] = true;
    }
    return result;
}

int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    bool isPrime[a + 1];
    sieve(a, isPrime);
    vector<bool> result = solve(a,b,isPrime);
    if (result[a])
        cout << "YES";
    else
        cout << "NO";
}