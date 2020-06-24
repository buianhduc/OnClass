#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <map>

using namespace std;

int solve(vector<vector<int>> a, int n, int row = 0, int result = 0)
{
    if(row == n-1)
    {
        return result;
    }
    else
    {
        vector<pair<int,bool>> result_arr;
        for (int i = 0; i < a[row].size(); i++)
        {
            int right = result + solve(a,n,row+1,)
        }
    }
}


int main()
{
    fstream in,out;
    int n;
    in.open("TG.INP");
    out.open("TG.OUT");

    vector<vector<int>> nums;
    for (int i = 0; i < n; ++i)
    {
        vector<int> temp;
        for (int j = 0; j <= i; ++j)
        {
            int tempNum;
            cin>>tempNum;
            temp.push_back(tempNum);
        }
        nums.push_back(temp);
    }

    in.close();
    out.close();
}

