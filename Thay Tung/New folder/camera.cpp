#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fi first
#define se second
#define mp make_pair
#define ep emplace_back
const int maxN = 1e1+1;
vector<int> ar;

signed main(){
        int n,d,a,b,count=0;
        cin>>n>>d>>a>>b;
        for(int i = 0; i < n; i++){
            int k,h;
            cin>>k>>h;
            ar.emplace_back(k*a+h*b);
        }
        for(int i = 0 ; i < ar.size(); i++){
            if(ar[i] > d) ar.erase(ar.begin()+i);
        }
        sort(ar.begin(),ar.end());
        for(auto& i : ar){
            if(d >= i){
                d -= i;
                count++;
            }
            else{
                break;
            }
        }
        cout<<count;
}
