#include <bits/stdc++.h>
using namespace std;

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

void printList(int n,vector<int>adj[]){

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

bool bfsCycle(int src,vector<int>adj[],vector<int>&vis){

   
    queue<pair<int,int>>q;

    q.push({src,-1});
    vis[src]=1;

    while(!q.empty()){

        int node=q.front().first;
        int parent = q.front().second;
        q.pop();

        for(auto child: adj[node]){
            if(!vis[child]){

                q.push({child,node});
                vis[child]=1;
            }

            else if(parent!=child){
                return true;
            }
            
        }
    }
    return false;

}
bool iscycle(int n,vector<int>adj[]){

    vector<int>vis(n+1,0);
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            if(bfsCycle(i,adj,vis)) return true;
        }
    }

    return false;

}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj[n + 1];

    addedges(e, adj);
    printList(n,adj);
    int ans = iscycle(n,adj);
    if(ans) cout<<"yes\n";
    else cout<<"NO\n";

}