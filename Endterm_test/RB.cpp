#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <climits>
using namespace std;
#define int long long
#define st first
#define nd second
#define pb push_back
#define mp make_pair

int n, m;
int nb[2001][2001];
int vs[2001][2001];
int h, c;
int dh[] = {0, -1, 0, 1};
int dc[] = {-1, 0 , 1, 0};
int ans = -LONG_LONG_MAX;
int t;
queue < pair<int,int> > q;
signed main(){
    freopen("RB.INP","r",stdin);
    freopen("RB.OUT","w",stdout);
    cin >> m >> n;
    for(int i = 1; i<=m; i++){
        for(int j = 1; j<=n; j++){
            cin >> nb[i][j];
        }
    }
    cin >> h >> c;
    q.push(mp(h,c));
    vs[h][c] = 1;
    ans = nb[h][c];
    t = 1;
    while(!q.empty()){
        int a = q.front().st;
        int b = q.front().nd;
        q.pop();
        for(int i = 0; i<4; i++){
            int u = a+dh[i];
            int v = b+dc[i];
            if(u>=1 && u <=m && v >= 1 && v <=n && vs[u][v] == 0){
                vs[u][v] = vs[a][b] +1;
                if(nb[u][v] > ans){
                    ans = nb[u][v];
                    t = vs[u][v];
                }
                q.push(mp(u,v));
            }
        }
    }
    cout << t;
}