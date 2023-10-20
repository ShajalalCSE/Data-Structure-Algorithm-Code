#include<bits/stdc++.h>
using namespace std;

const int N=100000;

int sieve[N+1];
void createSieve(){

    for(int i=1;i<=N;i++){
        sieve[i]=i;
    }

    for(int i=2;i*i<=N;i++){
        if(sieve[i]==i){
            for(int j=i*i;j<=N;j+=i){
                if(sieve[j]==j){
                    sieve[j]=i;
                }
            }
        }
    }
}
int main(){

    createSieve();
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        while(n!=1){
            cout<<sieve[n]<<" ";
            n=n/sieve[n];
        }
    cout<<endl;
    }
}