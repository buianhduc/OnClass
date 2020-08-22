#include <bits/stdc++.h>

using namespace std;

#define int long long
const int maxN = 401;
int a[maxN][maxN];

int calcSumA(int n){
    int sumA = 0;
    for(int i = 0; i < n; i++){
        sumA += a[i][i];
    }
    return sumA;
}

int calcSumB(int n){
    int sumB = 0;
    for(int i = 0; i < n; i++){
        sumB += a[i][n-1-i];
    }
    return sumB;
}

signed main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
    int res;
    for(int i = 1; i <= n; i++){

    }


    cout<<sumA-sumB;
}
