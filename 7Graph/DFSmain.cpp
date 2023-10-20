#include <bits/stdc++.h>
using namespace std;

void addedge(int u, int v, vector<int> adj[])
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs(int src, vector<int> adj[], vector<int> &vis)
{

    cout << src << " ";
    vis[src] = 1;

    for (auto child : adj[src])
    {
        if (vis[child])
            continue;

        dfs(child, adj, vis);
    }
}

int main()
{

    int n, e;
    cin >> n >> e;

    vector<int> adj[e];

    vector<int> vis(e, 0);
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        addedge(u, v, adj);
    }

    for (int i = 1; i <= n; i++)
    {

        cout << i << "=>";
        for (auto u : adj[i])
        {
            cout << u << " ";
        }
        cout << endl;
    }
    int src = 1;

    dfs(src, adj, vis);
}