#include <bits/stdc++.h>
using namespace std;

//===========add all edge in adjacency list=========================
void addedges(int e, vector<int> adj[])
{
    for (int i = 1; i <= e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

//===========print all node================================
void printList(int n, vector<int> adj[])
{

    for (int i = 1; i <= n; i++)
    {
        cout << i << "=>";
        for (auto u : adj[i])
        {
            cout << u << " ";
        }
        cout << endl;
    }
}
//=====================traverse all node in a graph=================

vector<int> bfs(int src, vector<int> adj[], vector<int> &vis)
{

    vector<int> path;
    queue<int> q;

    q.push(src);
    vis[src] = 1;

    while (!q.empty())
    {

        int node = q.front();
        path.push_back(node);

        q.pop();

        for (auto child : adj[node])
        {
            if (!vis[child])
            {

                q.push(child);
                vis[child] = 1;
            }
        }
    }

    return path;
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj[n + 1];
    vector<int> vis(n + 1, 0);

    addedges(e, adj);
    printList(n, adj);

    vector<int> path(bfs(1, adj, vis));
    for (auto u : path)
    {
        cout << u << " ";
    }
}