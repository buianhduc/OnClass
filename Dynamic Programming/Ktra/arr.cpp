#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> qhd(vector<int> a)
{
    int n = a.size();
    int l[1000001];
    l[0] = 1;
    int lMax,leng = 0;;
    vector<vector<int> > result;
    for(int i = 1; i < n; i++)
    {
        lMax = 0;
        vector<int> temp;
        temp.push_back(a[i]);
        for(int j = i-1; j > 0; j--)
        {
            if(a[i] < a[j])
            {
                temp.push_back(a[j]);
                lMax = max(l[j],lMax);
            }
        }
        l[i] = lMax+1;
        leng = max(l[i],leng);
        result.push_back(temp);

    }
    for(int i=0; i<result.size(); i++)
    {
        if(result[i].size() == leng)
        {
            return result[i];
        }
    }
}


int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    result = qhd(arr);
    cout<<result.size()<<endl;
    for(int i=result.size()-1; i>=0; i--){
        cout<<result[i]<<' ';
    }
    
    return 0;
}

/*10 
2 25 3 17 14 12 3 16 16 32*/