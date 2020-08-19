#include <bits/stdc++.h>
using namespace std;

#define int long long
const int INF = 1e9+1;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,maxn,f,nextMaxn;
        cin>>n>>f;
        int a[n+1],odd[n+1],even[n+1];
        cin>>a[0];
        maxn = a[0];
        for(int i = 1; i < n; i++)
        {
            cin>>a[i];
            maxn = max(a[i],maxn);
        }
        for(int j = 0 ; j < 2; j++)
        {
            nextMaxn = -INF;
            for(int i = 0; i < n; i++)
            {
                a[i] = maxn - a[i];
                nextMaxn = max(a[i],nextMaxn);
            }
            maxn = nextMaxn;
            for(int k = 0; k < n; k++)
            {
                if(j==0) odd[k] = a[k];
                else even[k] = a[k];
            }
        }
        if(f % 2 == 0){
            for(int i = 0; i < n; i++){
                cout<<even[i]<<" ";
            }
        }
        else{
            for(int i = 0; i < n; i++){
                cout<<odd[i]<<" ";
            }
        }
        cout<<endl;
    }


/*
3
2 1
-199 192
5 19
5 -1 4 2 0
1 2
69

*/
}
