#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define int long long

signed main()
{
    int m, n, count = 0;
    cin >> n >> m;
    while (m != n)
    {
        if (m > n)
        {
            if (m % 2 == 0)
            {
                m /= 2;
                count++;
            }
            else
            {
                m++;
                count++;
            }
        }
        else if (n>m)
        {
            m++;
            count++;
        }
    }
    cout << count;
}

