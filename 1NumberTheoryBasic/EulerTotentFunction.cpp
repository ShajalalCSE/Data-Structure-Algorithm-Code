#include <bits/stdc++.h>
using namespace std;

const int N = 10000000;

int sieve[N + 1];
void createSieve()
{

    // marking with itself
    for (int i = 1; i <= N; i++)
    {
        sieve[i] = i;
    }

    for (int i = 2; i * i <= N; i++)
    {

        if (sieve[i] == i)
        {
            for (int j = i * i; j <= N; j += i)
            {
                if (sieve[j] == j)
                {
                    sieve[j] = i; // marking with lowest prime multiple ex: 9 marked as 3 ,8 marked as 2
                }
            }
        }
    }
}
int main()
{

    createSieve(); //here sieve array is sieve [0 1 2 3 2 5 2 7 2 3 2 11 2 13 2 3 2 17 2 19].we start from index 2
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int tmp = 0;
        int ans = n;
        while (n != 1)
        {

            if (tmp != sieve[n])    //condition for take only one factor of same kind ex: 2,2,3,3,3 here only use 2 and 3 once
            {
                ans *= sieve[n] - 1; //euler equation is phi(n)=n*(1-1/p1)*(1-1/p2)....(1-1/pn) = n*(p1-1)/p1 * (p2-1)/p2 ....
                ans /= sieve[n];     // we initialize every index of sieve with minimum prime factor of every number in this index
                tmp = sieve[n];
            }
            n = n / sieve[n];
        }

    }
       
      
}

// youtube link: https://www.youtube.com/watch?v=0DT1_B0PVak&t=1797s