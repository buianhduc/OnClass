#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

const long long MAXN =2e5+69;

vector<int> graph[MAXN];

int main(){
    int n,a,b;
    cin>>n;
    int path[MAXN];
    path[1] = 1;
    for(int i = 2; i <= n; i++){
        cin>>a;
    path[i]=a;
        graph[a].push_back(i);
        graph[i].push_back(a);

    }
    vector<int> ans;
    int id = n;
    while(path[id] != id){
        ans.push_back(id);
        id = path[id];
    }
    ans.push_back(1);
    reverse(ans.begin(),ans.end());
    for(int i : ans){
        cout<<i<<' ';
    }
    return 0;
}