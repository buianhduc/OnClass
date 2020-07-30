
#include <algorithm>
#include <set>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>
#include <sstream>
#include <cstdio>
#include <ctime>
#include <map>
#include <stack>
#include <string>
using namespace std;

#define int unsigned long long int
#define mp make_pair

vector<pair<int,int> > factorize(int n) {
    vector<pair<int,int> > res;
    for (int i = 2; i * i <= n; ++i) {
        int count = 0;
        while (n % i == 0) {
            if(count == 0){
                res.push_back(make_pair(1,i));
            }
            else{
                res[]
            }
            n /= i;
        }
    }
    if (n != 1) {
        res.push_back(mp(1,n));
    }
    return res;
}

signed main(){
    int n,b;
    cin>>n>>b;
    vector<pair<int,int> > nFact = factorize(n);
    vector<pair<int,int> > bFact = factorize(b);
    vector<pair<int,int> > fact;
    for(int i = 0; i<nFact.size(); i++){
        
    }
}
//dp[n][n] = n!
//dp[n][1] = 1;
//dp[n][k] = k*(dp[n-1][k] + dp[n-1][k-1])
//dp[n][k] = 0 (n<k)