#include <iostream>
#include <vector>
using namespace std;

#define int long long
const int maxn = 1e5+1;
pair<vector<int> ,vector<int> > channel[maxn];

signed main(){
    int n,m,p;
    cin>>n>>m>>p;
    for(int i = 1; i <= n; i++){
        int a,b;
        cin>>a>>b;
        channel[a].first.push_back(i);
        channel[b].second.push_back(i);
    }
    int count = 0;
    bool firstCheck = false;
    for(auto && i : channel){
        if(i.second.empty()) firstCheck = true;
    }
    if(firstCheck){
        cout<<"-1";
        return 0;
    }
    while(!channel[p].second.empty()){
        count++;
        p = channel[p].second.front();
    }
    cout<<count;
    return 0;
}