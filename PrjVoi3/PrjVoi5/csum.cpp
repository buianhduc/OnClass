#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const long long maxn = 1e4+69;

signed main(){
    int n,k,b, sum = 0;
    cin>>n>>k>>b;
    int arr[maxn];
    for(int i = 1; i <= n; i++){
        cin>>arr[i];
    }
    while(b>n){
        b -= n;
    }
    int i = b+1;
    while (i<=b+1+k)
    {
        if(i>n){
            k -= i;
            i = 1;
        }
        sum += arr[i];
    }
    cout<<sum;
    
}