#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long 
#define pb push_back
#define mp make_pair

const int mxn = 1e4+1;
const int mxm = 1e6+1;
const int inf = 1e9+1;

vector<int> adj[mxn];
int dist[mxm],path[mxm];
vector<pair<pair<int,int>,int> > vt;

signed main(){
    int n,m,src,dst;
    cin>>n>>m>>src>>dst;
    for(int i = 0; i < n; i++){
        int a,b,c;
        cin>>a>>b>>c;
        vt.push_back(mp(mp(a,b),c));
    }


}

/*
    f[][](tuong ung voi so thong tin) = ?
    Cận là gì (chiều nhỏ nhất)
    Công thức là gì
    Kqua ở đâu
*/