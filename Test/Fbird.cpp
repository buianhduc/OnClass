#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
#include <climits>

using namespace std;

#define st first
#define nd second
#define pb push_back
#define mp make_pair


int main()
{
    //variable declaration
    queue<pair<int,int> > q;
    int n,m,limit;
    int dx[] = {-1,-1,-1,0,0,1,1,1};
    int dy[] = {-1,0,1,-1,1,-1,0,1};
    int ans = -LONG_LONG_MAX;

    cin>>m>>n>>limit;

    int a[n+1][m+1];
    vector<bool> visited(m*n,false);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }

    q.push(mp(1,1));
    int result = 0;
    //Bfs   
    while(!q.empty())
    {
        int aX = q.front().st;
        int bY = q.front().nd;
        q.pop();
        int temp = -1;
        for(int k =0; k<8; k++)
        {
            int i = aX+dx[k];
            int j = bY+dy[k];
            
            if(i > 0 and j > 0 and i<n and j<m and visited[i*j] == false)
            {
                visited[i*j] = true;
                pair<int,int> tmpPos;
                if(temp == -1){
                    temp = a[i][j];
                    tmpPos = mp(i,j);
                }
                else if(temp > a[i][j])
                {
                    temp = a[i][j];
                    tmpPos = mp(i,j);
                }
            }
            
            result += temp;
        }
    }
    cout<<result;
}