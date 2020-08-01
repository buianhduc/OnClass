#include <bits/stdc++.h>
using namespace std;
#define int long long

struct edge
{
    int u;
    int v;
    int val;
};


const int mxn = 1e4+1;
const int mxm = 1e4+1;
const int INF = 1e9+1;
int n,m;

edge edges[mxm];
vector <pair <int,int> > adj[mxn];

int d[mxn];
int e[mxn];
int vs[mxn];

void reset () {
    for (int i = 0;i < mxn;i++) {
        d[i] = 0;
        e[i] = 0;
        vs[i] = 0;
    }
}


void dijkstra (int s) {
    for (int v = 1;v <= n;v++) {
        d[v] = INF;
        e[v] = s;
        vs[v] = 0;
    }
    priority_queue <pair <int,int> > q;
    d[s] = 0;
    e[s] = -1;
    q.push({0,s});
    while (!q.empty())
    {
        int u = q.top().second;
        q.pop();
        if (vs[u]) continue;
        vs[u] = 1;
        for (auto obj : adj[u]) {
            int v = obj.first;
            int w = obj.second;
            if (d[u] + w < d[v]) {
                d[v] = d[u] + w;
                e[v] = u;
                q.push({-d[v],v});
            }
        }
    }
    return;
}

int getMinDistance (int u,int v) {
    dijkstra(u);
    // cout path
    int x = v;
    // while (x > 0)
    // {
    //     cout << x << endl;
    //     x = e[x];
    // }
    return d[v];
}

signed main(){
    // freopen("NAME.INP", "r" , stdin);
    // freopen("NAME.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int s,d;
    cin >> n >> m >> s >> d;
    for (int i = 1;i <= m;i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].val;
    }
    for (int i = 1;i <= m;i++) {
        adj[edges[i].u].push_back({edges[i].v,edges[i].val});
        adj[edges[i].v].push_back({edges[i].u,edges[i].val});
    }
    int d1 = getMinDistance(s,1);
    reset();
    cout << d1 + getMinDistance(1,d) << endl;
    return 0;
}