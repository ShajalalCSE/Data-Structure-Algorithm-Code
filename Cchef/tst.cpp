#include <bits/stdc++.h>
using namespace std;

int mysol(int n, int p, string s, string pass)
{

    //string s, pass;
    // cin>>s>>pass;
    int tmp = 99999999;
    for (int i = 0; i <=n - p; i++)
    {
         int  res = 0;

        for (int j = 0, k = i; j < p; j++, k++)
        {

            int x = (int)s[k] - '0';
            int y = (int)pass[j] - '0';
            int kk = y-x;

            if (kk <0)
            {
                kk += 10;
            }
                
            res += min(kk,(10-kk));
            
            
        }
        tmp=min(res,tmp);
         //cout<<res<<" ";
        
    }
   
    // cout<<tmp<<endl;
    
    // cout<<ans<<endl;
    return tmp;
}

int corsol(int n,int m, string s1,string s2)
{
    ///int n, m;

    // cin >> n >> m;
    // string s1, s2;
    // cin >> s1 >> s2;
    int mn_ct = 999999;
    for (int i = 0; i <= n - m; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            int pos = (i + j);

            int t1 = (int)(s2[j] - '0');
            int t2 = (int)(s1[pos] - '0');
            int diff = t2 - t1;
            if (diff < 0)
                diff += 10;
            sum += min(diff, (10 - diff));
        }
        mn_ct = min(sum, mn_ct);
    }
   // cout << mn_ct << endl;
return mn_ct;
}


int main()
{

    srand(time(NULL));

    int tt = 1;
    while (tt <= 10)
    {

        int n = rand() % 10 + 1;
        int p = rand() % n + 1;
        string st1 = "", pass = "";
        for (int i = 0; i < n; i++)
        {
            st1 += (rand() % 9 + 1) + '0';
        }
        for (int i = 0; i < p; i++)
        {
            pass += (rand() % 9 + 1) + '0';
        }

        int myans = mysol(n, p, st1, pass);
        int corans = corsol(n,p, st1,pass);

        if (myans != corans)
        {
            cout<<endl;
            cout << st1<<" "<<pass<< endl;
            cout << "my ans: " << myans << " "
                 << "correct ans: " << corans << endl;
        }

        tt++;
    }
}