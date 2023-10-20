#include<bits/stdc++.h>
using namespace std;

const int N=100000;

int sieve[N+1];
void createSieve(){

//marking with itself 
    for(int i=1;i<=N;i++){
        sieve[i]=i;
    }

    for(int i=2;i*i<=N;i++){
        if(sieve[i]==i){
            for(int j=i*i;j<=N;j+=i){
                if(sieve[j]==j){
                    sieve[j]=i; //marking with lowest prime multiple ex: 9 marked as 3 ,8 marked as 2
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

//youtube link: https://www.youtube.com/watch?v=0DT1_B0PVak&t=1797s