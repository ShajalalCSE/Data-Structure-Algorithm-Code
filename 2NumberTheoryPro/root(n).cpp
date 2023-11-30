#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int M = 1e9;
//TC O(n)
// here we are finding mid^n in linear time O(n)
// ll fn(int mid, int n, int m)
// {
//     ll ans = 1;
//     for (ll i = 1; i <= n; i++)
//     {
//         ans = ans * mid;
//         if (ans > m)
//             return 2;
//     }
//     if (ans == m)
//         return 1;
//     return 0;
// }

//TC O(log(n))
// here we are finding mid^n .using binary exponentiaion in O(log(n)) time
ll xPowerN(ll mid, ll n,ll m)
{
    ll ans = 1;
    while (n)
    {
        if (n & 1)
        {
            ans = (ans * mid);
        }

        mid = (mid * mid);
        n >>= 1;

        if(ans>m) return 2;
    }

    if(ans==m) return 1;
    return 0;
}
ll rooOfN(ll n, ll m)
{

    ll low = 1;
    ll high = m;
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        int check = xPowerN(mid, n, m);

        if (check == 1)
            return mid;

        else if (check == 0)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}
int main()
{
    ll n;
    ll m;
    cin >> n >> m;

    cout << rooOfN(n, m) << endl;
}