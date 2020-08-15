//
// Created by Duc Bui on 2020-08-12.
//
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;
using ll = long long;
uint64_t distance(int64_t x, int64_t y){
  return y-x;
}

int64_t midpoint(int64_t x, int64_t y){
  return y - int64_t(distance(x, y) >> 1);
}
const long long maxN = 1e5+1;
int64_t input[maxN];
signed main(){
//  freopen("MAXDIS.INP","r",stdin);
//  freopen("MAXDIS.OUT","w",stdout);
  ll n,l,r;
  uint64_t res=0,dis=0,kq;
  cin>>n>>l>>r;
  for(ll i = 0; i < n; i++){
      cin>>input[i];
  }
  for(ll i = l; i <= r; i++){
    dis = distance(i,input[0]);
    res = dis;
    for(ll j = 1; j < r; j++){
        dis = min(dis,distance(i,input[j]));
    }
    if(res < dis){
      res = dis;
      kq = i;
    }
  }
  cout<<kq;
}