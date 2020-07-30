#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define int long long
vector<int> graph[10000001];

signed main(){
    int m,n;
    cin>>m>>n;
    for(int i=1; i<=n; i++){
        int a,b;
        cin>>a>>b;
        graph[a].pb(b);
        graph[b].pb(a);
    }

    for(int i = 1; i<=m; i++){
        if(graph[i].size() == n){
            cout<<"star topology";
            return 0;
        }
        else if(graph[i].size() >= 3){
            cout<<"unknown topology";
            return 0;
        }
    }
    if(m == n){
        cout<<"ring topology";
        return 0;
    }
    cout<<"bus topology";
    return 0;
}