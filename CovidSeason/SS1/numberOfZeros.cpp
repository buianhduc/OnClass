#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long
const int MAX_N = 1e5+1;
vector<int> g_input;
vector<int> dp;

vector<int> factorize(int n) {
    vector<int> res;
    int last = 2;
    bool first = 1;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            if(last != i)
            {
                res.push_back(i);
                last = i;
            }
            else if(last == 2 and first){
                res.push_back(i);
                first = false;
            }
            n /= i;
        }
    }
    if (n != 1) {
        res.push_back(n);
    }
    return res;
}

int simplify(int n){
    while(n % 10 == 0){
        n /= 10;
    }
    return n%10;
}
void initDP(int n){
    dp.emplace_back(-1);
    dp.emplace_back(1);
    dp.emplace_back(2);
    int last = 2;
    for (int i = 3; i <= n; i++){
        vector<int> arr = factorize(i);
        if(arr.size() == 1){
            dp.emplace_back(simplify(dp[i-1]*arr[0]));
        }
        else{
            dp.emplace_back(dp[i-1]);
        }
    }
}

signed main(){
    int n,g = 0;
    cin>>n;
    while(n!=0){
        g_input.emplace_back(n);
        if (g < n){
            g = n;
        }
        cin>>n;
    }
    initDP(g+3);
    for(auto && i : g_input){
        cout<<dp[i];
        cout<<endl;
    }
}