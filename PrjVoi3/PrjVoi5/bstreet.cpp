#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mp make_pair
const int MAXN = 1e4 + 9;

vector<int> graph[MAXN];
vector<pair<pair<int, int>, int> > input;

struct subset
{
    int src, dest, price;
};

vector<subset> subsets;

bool isCyclicConntected(vector<int> adj[], int s, int V, vector<bool> &visited)
{
    vector<int> parent(V, -1);

    queue<int> q;

    visited[s] = true;
    q.push(s);

    while (!q.empty())
    {

        int u = q.front();
        q.pop();

        for (auto v : adj[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                q.push(v);
                parent[v] = u;
            }
            else if (parent[u] != v)
                return true;
        }
    }
    return false;
}

bool isCyclicDisconntected(vector<int> adj[], int V)
{
    vector<bool> visited(V, false);

    for (int i = 1; i <= V; i++)
        if (!visited[i] && isCyclicConntected(adj, i, V, visited))
            return true;
    return false;
}

bool cmp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b)
{
    return a.second < b.second;
}

int countEdges(int V)
{
    int sum = 0;

    //traverse all vertex
    for (int i = 1; i <= V; i++)

        // add all edge that are linked to the
        // current vertex
        sum += graph[i].size();

    // The count of edge is always even because in
    // undirected graph every edge is connected
    // twice between two vertices
    return sum / 2;
}

int solve(int nodes, int totalPrice = 0)
{
    for (pair<pair<int, int>, int> i : input)
    {
        subset temp;
        temp.src = i.first.first;
        temp.dest = i.first.second;
        temp.price = i.second;
        subsets.push_back(temp);
    }
    int i = 0;
    while (countEdges(nodes) < nodes - 1)
    {
        graph[subsets[i].src].push_back(subsets[i].dest);
        graph[subsets[i].dest].push_back(subsets[i].src);
        if (isCyclicDisconntected(graph, nodes))
        {
            totalPrice += subsets[i].price;
        }
        else
        {
            graph[subsets[i].src].pop_back();
            graph[subsets[i].dest].pop_back();
        }
        i++;
    }
    return totalPrice;
}

signed main()
{
    int m, n;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        input.push_back(mp(mp(a, b), c));
    }
    sort(input.begin(), input.end(), cmp);

    cout << solve(n);
}

/*
5 7
1 2 2
1 5 1
2 5 1
1 4 3
1 3 2
5 3 2
3 4 4
*/