#include <bits/stdc++.h>
using namespace std;

const int maxn = 50*(1e4+1);
int m,n,cnt = 0;
bool IsEnd[maxn];
int Child[maxn][26];

void Add(string s){
    int x = 0;
    for(int i = 0 ; i < s.length(); i++){
        int c = s[i] - 'a';
        if(Child[x][c] == 0) Child[x][c] = ++cnt;
        x = Child[x][c];
    }
    IsEnd[x] = 1;
}

bool Found(string s){
    int x = 0;
    for(int i = 0; i < s.length(); i++){
        int c = s[i] - 'a';
        if(Child[x][c] == 0) return 0;
        x = Child[x][c];
    }
    return IsEnd[x];
}

signed main(){
    freopen("FOUNDSTR.INP","r",stdin);
    freopen("FOUNDSTR.OUT","w",stdout);
    cin>>n;
    for(int i = 1 ; i <= n ; i++){
        string s;
        cin>>s;
        Add(s);
    }
    cin>>m;
    while(m--){
        string s;
        cin>>s;
        cout<<Found(s)<<endl;
    }
}
