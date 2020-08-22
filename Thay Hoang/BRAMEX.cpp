#include <bits/stdc++.h>
using namespace std;

const int maxn = 100*(1e4)+1;
int cnt = 0;
bool IsEnd[maxn];
int pass[maxn];
int Child[maxn][26];

void Add(string s){
    int x = 0;
    for(int i = 0 ; i < s.length(); i++){
        int c = s[i] - 'a';
        if(Child[x][c] == 0) Child[x][c] = ++cnt;
        x = Child[x][c];
        pass[x]++;

    }
    IsEnd[x] = 1;
}

int Found(string s){
    int x = 0,count = 0;
    for(int i = 0; i < s.length(); i++){
        int c = s[i] - 'a';
        if(Child[x][c] == 0) return 0;
        x = Child[x][c];
    }
    return pass[x];
}


signed main(){
    ios_base::sync_with_stdio(0);
    freopen("BRAMEX.INP","r",stdin);
    freopen("BRAMEX.OUT","w",stdout);
    int m,n;
    cin>>n;
    for(int i = 0 ; i < n; i++){
        string temp;
        cin>>temp;
        Add(temp);
    }
    cin>>m;
    while(m--){
        string s;
        cin>>s;
        cout<<Found(s)<<endl;
    }

}
