#include <iostream>
#include <vector>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
vector<int> vt;

signed main(){
    int n,p,res = 0;
    cin>>n>>p;
    for(int i = 0 ; i < n; i++){
        int temp;
        cin>>temp;
        vt.pb(temp);
    }
    for(int i = 0; i < n-1; i++){
        for(int j = n-1; j > i; j--){
            cout<<vt[j]-vt[i]<<' '<<j<<' '<<i<<endl;
            if(vt[j] - vt[i] >= p){
                res = j - i + 1;
                goto printAns;
            }
        }
    }
    printAns: cout<<res;
}