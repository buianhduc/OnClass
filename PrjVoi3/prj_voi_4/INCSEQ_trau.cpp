#include <iostream>
#include <vector>
using namespace std;

#define pb push_back
#define int long long
const long long mod = 5e6;
signed main(){
    int n,k;
    cin>>n>>k;
    int dp[n+69][n+69], vt[n+1];

    for(int i = 1; i <= n; i++){
        cin>>vt[i];
    }
    int i,j,m;
    for(i = 0; i<=n; i++){
        dp[1][i] = 1;
    }
    for( i = 2; i<= k; i++){
        for (j = i; j<=n; j++){
            for(m=1; m<=j-1; m++){
                if(vt[m]<vt[j]){
                    dp[i][j] +=  dp[i-1][m];
                }
            }
        }
    }
    int count = 0;
    for(i = 1; i<=n; i++){
        count += dp[k][i]%mod;
        count%=mod;
    }
    count %= mod;
    cout<<count;
}