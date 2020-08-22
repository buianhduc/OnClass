#define taskname "PALIND"
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <array>

using namespace std;
const int nd = 100;

string s;
int n;

//d[0]: hÃ ng Ä‘Æ¡n vá»‹, d[1]: hÃ ng chá»¥c
struct TNumber
{
    array<int, 100> d;
    TNumber& operator = (const string& s)
    {
        fill(d.begin(), d.end(), 0);
        int i = 0;
        for (int j = (int)s.length() - 1; j >= 0; --j)
            d[i++] = s[j] - '0';
        return *this;
    }
    TNumber& operator += (const TNumber& other)
    {
        int carry = 0;
        for (int i = 0; i < nd; ++i)
        {
            carry += d[i] + other.d[i];
            d[i] = carry % 10;
            carry /= 10;
        }
        return *this;
    }
    TNumber& operator --()
    {
        for (int i = 0; i < nd; ++i)
            if (d[i] == 0) d[i] = 9;
            else
            {
                --d[i];
                break;
            }
        return *this;
    }
    void Fill9(int k)
    {
        fill(d.begin(), d.begin() + k, 9);
        fill(d.begin() + k, d.end(), 0);
    }
    void Print()
    {
        int i = nd - 1;
        while (i > 0 && d[i] == 0) --i;
        for (; i >= 0; --i)
            cout << d[i];
    }
} res;

bool Check(string& s)
{
    string t = s;
    int i = 0, j = (int)t.length() - 1;
    for (; i < j; i++, j--)
        t[j] = t[i];
    return t > s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen(taskname".INP", "r", stdin);
    freopen(taskname".OUT", "w", stdout);
    getline(cin, s);
    n = s.length();
    res.Fill9(n / 2);
    TNumber temp;
    temp = s.substr(0, (n + 1) / 2);
    res += temp;
    if (Check(s))
        --res;
    res.Print();
}