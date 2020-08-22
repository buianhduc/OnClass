#include <bits/stdc++.h>
using namespace std;

vector<int> vt;

signed main(){
    freopen("RANDNUM.INP","r",stdin);
    freopen("RANDNUM.OUT","w",stdout);
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int a,b;
        cin>>a>>b;
        if(a == 1){
            vt.push_back(b);
        }
        else{
            sort(vt.begin(),vt.end());
            cout<<vt[b-1]<<endl;
        }
    }
}
