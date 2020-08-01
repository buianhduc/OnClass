#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

#define int long long
int gcd(int a, int b)
{

    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

pair<int, int> simplify(int a, int b)
{
    // int divisor = gcd(a, b);
    // a /= divisor;
    // b /= divisor;
    return make_pair(a, b);
}

bool isFit(int a, int b)
{
    if (gcd(a, b) == b)
    {
        return true;
    }
    return false;
}

void printRes(int n, bool isPrime[])
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                count++;
            }
            else if (isPrime[i] and isPrime[j] ) continue;
            else
            {
                if (isFit(i, j))
                {
                    count++;
                }
            }
        }
    }
    pair<int, int> simplified = simplify(count, n * n);
    cout << simplified.first << "/" << simplified.second << endl;
}

signed main()
{
    int n, max = 0;
    cin >> n;
    vector<int> vt;

    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        if(temp > max) max = temp;
        vt.push_back(temp);    
    }

    bool isPrime[max + 1];
    for (int i = 0; i <= max; ++i)
    {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i * i <= max; ++i)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    
    for(int i : vt){
        printRes(i,isPrime);
    }

}