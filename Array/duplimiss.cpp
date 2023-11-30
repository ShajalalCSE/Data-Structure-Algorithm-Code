#include <bits/stdc++.h>
using namespace std;

pair<int, int> dupmiss(int n, int ar[])
{
    int s0 = 0;
    int s20 = 0;
    int sn = (n * (n + 1) / 2);
    int s2n = (n * (n + 1) * (2 * n + 1) / 6);

    for (int i = 0; i < n; i++)
    {

        s0 += ar[i];
        s20 += ar[i] * ar[i];
    }
    
    int l = s0 - sn;
    int k = (s20 - s2n) / (s0 - sn);
    int x, y;
    x = (k + l) / 2;
    y = k - x;
    return {x, y};
}

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    cout << dupmiss(n, ar).first << " " << dupmiss(n, ar).second << "\n";
}