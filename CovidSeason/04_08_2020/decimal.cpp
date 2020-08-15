#include <iostream>
using namespace std;
#define int unsigned long long int
const int mod = 10e9+7;

signed main(){
  int a,b,k,res = 0;
  cin>>a>>b>>k;
  if(a%b != 0){
    while(a>b){
      a%=b;
    }
    while(k--){
      a *= 10;
      int div = a - (a%b);
      res += div/b;
      res %= mod;
      a %= b;
    }
  }
  cout<<res%mod;
}