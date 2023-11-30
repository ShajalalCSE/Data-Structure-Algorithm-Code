#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9;

ll xPowerN(ll x, ll n)
{
    ll ans = 1;
    while (n)
    {
        if (n & 1)
        {
            ans = (ans * x)%M;
            n--;
        }
        else{
        x = (x * x)%M;
        n=n/2;
        }
    }
    return ans;
}
int main()
{
    ll x, n;
    cin >> x>> n;
    ll res = xPowerN(x, n);
    cout << res << endl;
}