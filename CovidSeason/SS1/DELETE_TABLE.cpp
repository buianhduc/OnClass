#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define int long long
#define ar array
#define db double
#define pi 3.14159265358979323846
#define pr pair <int,int>

const int INF = 1e9+1;
const int mxn = 1e5 + 1;
int n,m,k;
int a[mxn] = {0};

int hang[mxn];
int cot[mxn];


signed main(){
    // freopen("NAME.INP", "r" , stdin);
    // freopen("NAME.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> k;
    for (int i = 1;i <= k;i++) {
        int x,y;
        cin >> x >> y;
        hang[x] = 1;
        cot[y] = 1;
    }
    int r1=0,r2=0;
    for (int i = 1;i <= n;i++) {
        if (hang[i] == 1) r1 += 1;
    }
    for (int i = 1;i <= m;i++) {
        if (cot[i] == 1) r2+= 1;
    }
    cout << r1 * r2 << endl;
    return 0;
}