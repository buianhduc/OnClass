#include <bits/stdc++.h>
using namespace std;


signed main(){
    int n;
    cin>>n;
    set<int> s;

    for(int i = 0; i < n ; ++i){
        int a,b;
        cin>>a>>b;
        for(int i = a ; i < b; i ++){
            s.insert(i);
        }
    }

    cout<<s.size();

}
