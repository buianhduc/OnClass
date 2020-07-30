#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int __lcm(int a, int b)
{
    int lcm;
    if (a > b)
        lcm = a;
    else
        lcm = b;
    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            cout << "The LCM of " << a << " and " << b << " is " << lcm;
            break;
        }
        lcm++;
    }
    return lcm;
}

int main()
{
    vector<int> v;
    vector<int> larCM;
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v.push_back(i);
    }
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            larCM.push_back(__lcm(v[i],v[j]));
        }
    }
    for (int i : larCM)
    {
        cout << i << ' ';
    }
}