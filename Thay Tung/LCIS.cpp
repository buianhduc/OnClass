#define taskname "LCIS"
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
const int maxMN = 5002;
const int infty = 1e9 + 1;

int m, n;
int a[maxMN], b[maxMN];
int f[maxMN][maxMN];

void ReadInput()
{
    cin >> m >> n;
    for (int i = 1; i <= m; ++i)
        cin >> a[i];
    for (int j = 1; j <= n; ++j)
        cin >> b[j];
    b[n + 1] = infty;
}

void Init()
{
    for (int i = 0; i <= m; ++i)
        f[i][0] = 0;
    for (int j = 0; j <= n; ++j)
        f[0][j] = 0;
}

void Optimize()
{
    for (int i = 1; i <= m; ++i)
    {
        int k = 0; //b[k] = phįŗ§n tį»­ Ä‘Ć£ xĆ©t trong b mĆ  bįŗ±ng vį»›i a[i]
        for (int j = 1; j <= n + 1; ++j)
        {
            //TĆ­nh f[i][j]
            f[i][j] = f[i - 1][j];
            if (a[i] < b[j] && k > 0)
                f[i][j] = max(f[i][j], f[i - 1][k] + 1);
            if (b[j] == a[i])
              k = j;
        }
    }
}

void Print()
{
    deque<int> res;
    int i = m, j = n + 1;
    while (f[i][j] > 0)
    {
        if (f[i][j] == f[i - 1][j]) --i;
        else
        {
            int k = j - 1;
            while (a[i] != b[k]) --k;
            res.push_front(a[i]);
            --i;
            j = k;
        }
    }
    cout << f[m][n + 1] << '\n';
    for (int x: res) cout << x << ' ';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen(taskname".INP", "r", stdin);
    freopen(taskname".OUT", "w", stdout);
    ReadInput();
    Init();
    Optimize();
    Print();
}

/*
LCIS: DĆ£y con tÄng chung dĆ i nhįŗ�t
a[1], a[2], ..., a[i], ..., a[m]
b[1], b[2], ..., b[j], ..., b[n], b[n + 1] = +oo
Gį»¨i f(i, j) lĆ  Ä‘į»™ dĆ i LCIS cį»§a a[1...i] vĆ  b[1...j - 1] mĆ  thį»¸a mĆ£n:
Nįŗæu nį»‘i thĆŖm b[j] vĆ o LCIS nĆ y ta vįŗ«n Ä‘Ę°į»£c dĆ£y tÄng.
a[1], a[2], ..., a[i]
b[1], b[2], ..., b[j - 1], b[j]
CĆ�ch tĆ­nh f(i, j)
- KhĆ´ng cįŗ§n dĆ¹ng a[i]: f(i, j) = f(i - 1, j)
- CĆ³ cįŗ§n dĆ¹ng a[i] = Q (Ä‘iį»u kiį»‡n a[i] < b[j])
  TĆ¬m b[k] = Q Ä‘į»©ng trĘ°į»›c b[j]
  a[1], a[2], ..., a[i] = Q
  b[1], b[2], ...,b[k] = Q, ..., b[j]
  Nįŗæu tĆ¬m thįŗ�y f(i, j) = f(i - 1, k) + 1

*/

