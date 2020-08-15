#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

#define int long long
const int maxn = 1e5+1;
bool hate[maxn];
queue<int> channel[maxn];

signed main() {
    int n, m, p, count = 0;
    cin>>n>>m>>p;
    memset(hate, 0, maxn);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin>>a>>b;
        hate[b] = true;
        channel[b].push(a);
    }
    bool allow = false;
    for (int i = 1; i < m; i++) {
        if (!hate[i]) {
            allow = true;
            break;
        }
    }
    if (allow) {
        while (!channel[p].empty()) {
            p = channel[p].front();
            count++;
        }

    }
    else {
        count = -1;
    }
    cout<<count;
}