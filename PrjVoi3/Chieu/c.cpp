#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

using namespace std;
const long long MAXN = 2e5 + 69;
vector<int> graph[MAXN];
vector<bool> visited(MAXN);
int id[MAXN];
vector<int> bfs(int u)
{
    deque<int> dq;
    dq.push_back(u);
    vector<int> ans;
    visited[u] = 1;
    while (!dq.empty())
    {
        int v = dq.front();
        dq.pop_front();
        ans.push_back(v);

        for (int w : graph[v])
        {
            if (!visited[w])
            {
                visited[w] = 1;
                dq.push_back(w);
            }
        }
    }
    return ans;
}
bool cmp(int x, int y)
{
    return id[x] < id[y];
}
signed main()
{
    int n, a, b;
    cin >> n;
    vector<int> k;
    for (int i = 1; i <= n; i++)
    {
        visited[i] = false;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    k.push_back(-1);
    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        k.push_back(temp);
        id[k[i]] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end(), cmp);
    }
    vector<int> model = bfs(1);
    for (int i = 1; i <= n; i++)
    {
        if (k[i] != model[i - 1])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}