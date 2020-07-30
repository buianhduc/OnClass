#include <iostream>
using namespace std;

int arr[300001];

int main()
{
    freopen("sort.in","r",stdin);
    freopen("sort.out","w",stdout);
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}