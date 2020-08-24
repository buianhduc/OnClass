#include <bits/stdc++.h>
using namespace std;

#define matrix vector<vector<int> >
#define int long long
const int mod = 1000000007;


matrix operator *(matrix a, matrix b){
    if (b.empty() && a.empty()) return {};
    if (a.size() != b[0].size()) return {};
    int k = a[0].size(), l = a.size(), m = b.size();
    matrix res;
    vector <int> temp;
    temp.assign(k,0);
    res.assign(m,temp);
    for(int i = 0; i < k; i++){
        for(int j = 0 ; j < m; j++){
            for(int h = 0; h < l; h++){
                res[j][i] += a[h][i] * b[j][h];
                res[j][i] %= mod;
            }
        }
    }
    return res;
}


signed main(){
    int n;
    cin>>n;
    cout<<fib(n);
}

