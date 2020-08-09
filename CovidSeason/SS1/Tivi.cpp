#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

#define int long long
const int maxn = 1e5+1;
queue<int> channel[maxn];

signed main(){
    int n,m,p,count = 0;
    cin>>n>>m>>p;
    for(int i = 0; i < n; i++){
        int a,b;
        cin>>a>>b;
        channel[b].push(a);
    }
    bool check = false;
    for(int i = 1; i <= m; i++){
        if(channel[m].empty()){
            check = true;
        }
    }
    if(check){
        while(!channel[p].empty()){
            p = channel[p].front();
            count++;
        }
        cout<<count;
    }
    else{
        cout<<"-1";
    }
}