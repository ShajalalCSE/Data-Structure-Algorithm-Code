#include <bits/stdc++.h>
using namespace std;

void inputMat(int n, int m, vector<vector<int>> &v)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            v[i][j]=x;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        reverse(v[i].begin(),v[i].end());
    }
}

int main()
{

    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n,vector<int>(m,0));
    inputMat(n, m, v);

    for (auto u : v)
    {
        for (auto b : u)
        {
            cout << b << " ";
        }
        cout << "\n";
    }
}