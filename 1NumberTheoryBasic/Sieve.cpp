#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(ll checknumber){

    int n=1000000;
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(ll p=2;p*p<=n;p++){
        if(prime[p]==true){
            for(ll i=p*p;i<=n;i+=p){
                prime[i]=false;
            }
        }
    }
    if(prime[checknumber]){
        return true;
    }
    else return false;

    // for(int p=2;p<=n;p++){
    //     if(prime[p]){
    //         cout<<p<<" ";
    //     }
    // }
}

int main(){

    int num;
    cin>>num;
    if(isPrime(num)){
        cout<<"Prime\n";
    }
    else cout<<"notPrime\n";
   
}