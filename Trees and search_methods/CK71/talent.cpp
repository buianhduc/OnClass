#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

#define int unsigned long long int
const int maxN = 1e5+1;
int d[maxN], w[maxN],p[maxN];


signed main(){
    int n,m;
    cin>>n>>m;
    for(int i = 0 ; i < n; ++i){
        cin>>d[i];
    }
        for(int i = 0 ; i < n; ++i){
        cin>>w[i];
    }
    for(int i = 0 ; i < m; ++i){
        cin>>p[i];
    }
    for(int i = 0 ; i < m; i++){
        int sum = 0;
        for(int j = 0 ; j < n ; j++){
            if(d[j] > p[i]){
                sum += w[j]*(d[j] - p[i]);
            }
            else{
                sum += w[j]*(p[i]-d[j]);
            }
        }
        cout<<sum<<endl;
    }
}