#include <iostream>
#include <math.h>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

// int a[100][100],n,u,vs[100],e[100];
// void DfsDequy(int u){
//     int v;
//     cout<<u<<' ';
//     vs[u]=1;
//     for(v=1; v<=n; v++){
//         if(vs[v]==0 && a[u][v]==1){
//             e[v]=u;
//             DfsDequy(v);
//         }
//     }
// }

fstream in,out;
int n,m,s,t,kq=0;
int a[1001][1001];

void nhap(){
    in>>n>>m;
    in>>s>>t;
    int u,v;
    for(int i=1; i<=m;i++){
        in>>u>>v;
        a[u][v] = i;
    }
    in.close();
}

int q[1001],vs[1001],e[1001],dq=1, cq=0;
void Bfs(int u){
    cq++; q[cq]=u; vs[u]=1; e[u]=0;
    while (dq<=cq){
        int i=q[dq]; dq++;
        for(int j=1; j<=n; j++){
            if(vs[j]==0 && )
        }
    }
}
