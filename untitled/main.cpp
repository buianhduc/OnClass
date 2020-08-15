#include <iostream>
using namespace std;

#define int long long

bool check(int a, int b, int c, int d)
{
    int arr[] = {a, b, c, d};
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    if (count == 3)
        return true;
}

bool solve(int r, int g, int b, int w)
{
    if (r == g and g == b and b == w and w % 2 == 0)
    {
        return true;
    }
    while (!check(r, g, b, w))
    {
        if (r == 0 or g == 0 or b == 0)
        {
            break;
        }
        else{
          if (r > 0 and g > 0 and b > 0)
          {
            w+=1;
            g-=1;
            r-=1;
            b-=1;
          }
        }
    }
    return check(r, g, b, w);
}

signed main()
{
    int n, r, g, b, w;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin>>r>>g>>b>>w;
        solve(r, g, b, w) ? cout << "YES" << endl : cout << "NO" << endl;
    }
}