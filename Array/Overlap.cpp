#include <bits/stdc++.h>
using namespace std;

vector<vector<int >> inp(int n, int m, vector<vector<int>> &v)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            v[i][j] = x;
        }
    }

    sort(v.begin(), v.end());

    vector<vector<int>> ans;
    ans.push_back({v[0][0], v[0][1]});

    int k = 0;
    for (int i = 0; i < n - 1; i++)
    {

        if (ans[k][1] >= v[i + 1][0])
        {
            ans[k][1] = max(ans[k][1], v[i + 1][1]);
        }
        else
        {
            ans.push_back({v[i + 1][0], v[i + 1][1]});
            k++;
        }
    }

    return ans;
}

int main()
{

    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m, 0));
    vector<vector<int >>copy=inp(n, m, v);
    for (auto u : copy)
    {
        for (int b : u)
        {
            cout << b << " ";
        }
        cout << "\n";
    }
}