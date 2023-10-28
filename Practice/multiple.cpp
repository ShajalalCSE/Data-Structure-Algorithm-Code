#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {

        ll p, l, q;
        cin >> p >> l;
        ll num = p - l;
        if (num < l)
            cout << "Case " << i << ": "
                 << "impossible\n";
        else
        {
            vector<ll>v;
            for (int j = 1; j <= sqrt(num); j++)
            {
               
                 if (num % j == 0 and (j != num/j)){
                   v.push_back(j);
                   v.push_back(num/j);
                }
                else if(num%j==0 and (j==num/j)){
                    v.push_back(j);
                
            }
            }
            cout << "Case " << i << ": ";
            sort(v.begin(),v.end());
            for(auto u:v){
                if(u>=l)
                cout<<u<<" ";
            }
            cout << endl;
        }
    }
}