#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mp make_pair
const int maxn = 10e5+2;
pair<int,int> box[maxn];
signed main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>box[i].first>>box[i].second;
    }
    int area[n+2];
    for(int i = 0; i < n; i++){
        area[i] = box[i].first + box[i].second;
    }
    int k = sizeof(area)/sizeof(area[0]);
    sort(area,area+k);
    for(int i : area){
        cout<<i<<endl;
    } 
}