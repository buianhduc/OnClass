#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const long long MAXN = 1e5+10;
vector<int> graph[MAXN];
bool visited[MAXN];
int edges[MAXN];

void dfs(int u){
    visited[u] = true;
    
    if
}

signed main(){
    int nodes;
    cin >> nodes;
    for(int i = 1; i<=nodes; i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i = 0; i<MAXN; i++){
        bool[i] =false;
    }
    if(nodes%2 == 1){
        cout<<"-1";
        return 0;
    }

}