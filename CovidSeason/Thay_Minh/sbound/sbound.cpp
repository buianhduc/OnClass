//
// Created by Duc Bui on 2020-08-12.
//
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
#define int long long
const int maxN = 1e5+1;
int arr[maxN];

signed main(){
  freopen("SBOUND.INP","r",stdin);
  freopen("SBOUND.OUT","w",stdout);
  int n,L,R;
  cin>>n>>L>>R;
  arr[0] = 0;
  for(int i = 1 ; i <= n; i++){
    int a;
    cin>>a;
    arr[i] = arr[i-1]+a;
  }
  sort(arr,arr+n+1);
  int j = 0, k = 0,res = 0;
  for(int i = 0; i < n; i++){
    if(j <= i){
      j = i+1;
    }
    if(k <= i){
      k = i+1;
    }
    while(j <= n and arr[j] - arr[i] < L) ++j;
    while (k <= n and arr[k] - arr[i] <= R) ++k;
    res +=k-j;
  }
  cout<<res;
}
