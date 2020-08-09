//
// Created by Duc Bui on 2020-08-09.
//

#include <iostream>
#include <vector>
using namespace std;
#define int long long
const int maxn = 1e5+1;
int input[maxn];
int maxSum(int arr[], int n, int k) {
  // k must be greater
  if (n < k) {
    cout << "Invalid";
    return -1;
  }

  // Compute sum of first window of size k
  int res = 0;
  for (int i = 0; i < k; i++)
    res += arr[i];

  // Compute sums of remaining windows by
  // removing first element of previous
  // window and adding last element of
  // current window.
  int curr_sum = res;
  for (int i = k; i < n; i++) {
    curr_sum += arr[i] - arr[i - k];
    res = max(res, curr_sum);
  }

  return res;
}

signed main(){
  int n,m,k,res = 0;
  cin>>n>>m>>k;
  for(int i = 0; i < n; i++) cin>>input[i];
  for(int i = m; i <= k; i++){
    res = max(res,maxSum(input,n,i));
  }
  cout<<res;
}