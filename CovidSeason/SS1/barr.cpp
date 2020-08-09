#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define mp make_pair
#define pb push_back
#define ll long long
#define ld long double
#define st first
#define nd second
#define endl "\n"
const ld PI = 3.14159265;
typedef pair<ll,ll> pi;
const ll MOD = 1e9+7;
const ll MOD2 = 5e6;
ll n, a[500001], ans =0, vs[500001];
signed main(){
    cin >> n;
    ll l = 1, r = 1;
    for(int i = 1; i<=n ; i++){
        cin >> a[i];
    }
    vs[a[1]] = 1;
    ans=1;
    while(r<n){
        if(vs[a[r+1]]<2){
            r+=1;
            vs[a[r]]++;
            ans+=r-l+1;
        }
        else{
            vs[a[l]]--;
            l++;
        }
        // cout << ans << endl;
    }
    cout << ans;
}
