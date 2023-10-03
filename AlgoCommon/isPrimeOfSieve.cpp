#include <bits/stdc++.h>
using namespace std;


//creating a prime number matrix.

vector<bool> matrix(int n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = false, isPrime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    return isPrime;
}

// checking in sieve matrix that number is prime or not.
bool isPrime(int num, vector<bool> &sieve)
{

    if (num < 0)
        return false;
    if (num < sieve.size())
        return sieve[num];
    return false;
}
int main()
{

    int n;
    cin >> n;
    int num;
    cin >> num;
    vector<bool> sieve = matrix(n); //copy all element of matrix into sieve.

    if (isPrime(num, sieve))
    {
        cout << num << endl;
    }
    else
        cout << "not prime";
}