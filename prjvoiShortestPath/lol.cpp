#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+1;

signed main(){
    int n;
    vector<int> price;
    cin>>n;
    for(int i = 0; i < 3*n ;i++){
        int temp;
        cin>>temp;
        price.emplace_back(temp);
    }

    //find max
    int k = n;
    int maxRes = 0;
    for(int i = 0; i < k; i++){
        maxRes += price[i];
    }
    int curr_sum = maxRes;
    for(int i = k; i < 3*n; i++){
        curr_sum += price[i] - price[i-k];
        maxRes = max(maxRes,curr_sum);
    }

    cout<<maxRes;



}
