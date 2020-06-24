#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int n;
vector< vector<int> > arr;
int f[1001][1001];

void enter(){
    freopen("TG.INP", "r", stdin);
    freopen("TG.OUTP", "w", stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for (int i = 1; i<=n; i++)
        {
            vector<int> temp;
            for (int j = 1; j<=i; j++)
            {
                int tempNum;
                cin>>tempNum;
                temp.push_back(tempNum);
            }
            arr.push_back(temp);
        }
    }
}

void Optimize()
{
    int i,j;
    for(i=1; i<n-1; i++)
    {
        f[i,0] = -1;
        f[i,i+1] = -1;
    }
    f[0,0] = 0;
    f[1,1] = arr[1,1];
    for(int i = 2; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            f[i,j] = max(f[i-1,j-1],f[i-1,j]) + arr[i,j];
        }
    }
}

void Trace(int i, int j)
{
    if(f[i,j] = f[i-1,j-1]+a[i,j]) j--;
    i--;
    if(i>0)
    {
        trace(i,j);
        cout<<i<<' '<<j<<endl;
    }
}

void escape(int i, int iMax)
{
    iMax = 1;
    for (i=2; i<=n; i++)
    {
        if(f[n,iMax] < f[n,i]) iMax = i;
        cout<<F[n,]
    }
}

int main()
{

}