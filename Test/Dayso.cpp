#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
using namespace std;

#define int long long

signed main()
{
    freopen("DAYSO.INP","r",stdin);
    freopen("DAYSO.OUT","w",stdout);
    int n,temp;
    vector<int> result,a;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<((a[i]+1)*(a[i]+1))%10<<endl;
    }
}