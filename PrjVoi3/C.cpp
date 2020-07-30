#include <iostream>
#include <vector>
#include <algorithm>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define int long long
using namespace std;

bool solve(int bugs, int inter){
    vector<int> vt[1000001];
    int sex[bugs + 1];
    bool res=true;
    int a,b;
    for(int i = 1; i<=inter; i++){
        cin>>a>>b;
        vt[a].pb(b);
        vt[b].pb(a);
    }
    for(int i = 0; i<bugs+1; i++){
        sex[i] = 2;
    }
    sex[a] = 1;
    for(int i = 1 ; i<=inter; i++){
        for(int j : vt[i]){
            if(sex[j] == 2){
                if(sex[i] == 1){
                    sex[j] = 0;
                }
                else sex[j] = 1;
            }
            else{
                if((sex[i] == 0 and sex[j] == 0) or (sex[i] == 1 and sex[j] == 1)){
                    res = false;
                    return res;
                }
            }
        }
    }
    return res;
}

signed main(){
    int bugs, inter;
    cin>>bugs>>inter;
    cout<<solve(bugs,inter);
}   