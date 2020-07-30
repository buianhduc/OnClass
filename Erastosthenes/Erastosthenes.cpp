#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isPrime[INT16_MAX];
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 0; i < INT16_MAX; i++)
    {
        isPrime[i] = true;
    }
    for (int i=2; i*i < INT16_MAX; i++)
    {
        for (int j = i*i; j < INT16_MAX; j+=i)
        {
            if (isPrime[i])
                isPrime[i] = false;
        }
    }
    cout << isPrime[n];
}