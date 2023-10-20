#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(ll n){
    if(n<=0 || n==1) return false;
    for(ll i=2;i<=sqrt(n);i++){

        if(n%i==0)return false;
    }

    return true;

}
int main(){
    ll n;
    cin>>n;
    ll res=isPrime(n);
    if(res)cout<<"prime\n";
    else cout<<"notPrime\n";

}