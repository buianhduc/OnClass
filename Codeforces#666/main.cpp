#include <bits/stdc++.h>
using namespace std;

signed main(){
    int n,res=0;
    cin>>n;
    vector<double> vt;
    bool isOne = false;
    for(int i = 0; i < n; i++){
        double temp;
        cin>>temp;
        vt.push_back(temp);
    }
    sort(vt.begin(),vt.end());
    if(vt[0] > 1){
        res += vt[0]-1;
        vt[0] = 1;
    }
    int f = n-1;
    double exp = 1.0/f;
    double la = ceil(pow(vt[n-1],exp));
    for(int i = 1; i < n; i++){
        res += abs(vt[i] - pow(la,i));
    }
    cout<<res;
}
