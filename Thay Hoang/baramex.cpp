#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e4+1;
vector<string> s, queries;

signed main(){
    freopen("BRAMEX.INP","r",stdin);
    freopen("BRAMEX.OUT","w",stdout);
    int m,n;
    cin>>n;
    for(int i = 0 ; i < n; i++){
        string temp;
        cin>>temp;
        s.emplace_back(temp);
    }
    cin>>m;
    for(int i = 0 ; i < m ; i++){
        string temp;
        cin>>temp;
        queries.emplace_back(temp);
    }
    for(auto& i : queries){
            int count = 0;
        for(int j = 0 ; j < n ; j++){
            if(i == s[j].substr(0,i.length())) count++;
        }
        cout<<count<<endl;
    }
}
