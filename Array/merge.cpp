#include <bits/stdc++.h>
using namespace std;
void merg(int n, int m, int a[], int ar[])
{

    for (int i = 0; i < n; i++)
    {
        if (a[n - i - 1] > ar[i])
        {
            swap(a[n - i - 1], ar[i]);
        }
    }

    sort(a, a + n);
    sort(ar, ar + m);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    for (int i = 0; i < m; i++)
    {
        cout << ar[i] << " ";
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    int ar[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> ar[i];
    }

    merg(n, m, a, ar);
}