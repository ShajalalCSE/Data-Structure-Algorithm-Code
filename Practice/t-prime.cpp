#include<bits/stdc++.h>
using namespace std;
void tPrime(int n, long long ar[]){
    for(int i=0;i<n;i++){
        int cnt=2;
        if(sqrt(ar[i]) * sqrt(ar[i])==ar[i]){

        for(int j=2;j<=sqrt(ar[i]);j++){
            if(ar[i]%j==0){
                cnt++;
                if(cnt==4) break;
               
            }

        }
        }
        if(cnt==3)cout<<"YES\n";
        else cout<<"NO\n";
    }
}

int main(){
    int n;
    cin>>n;
    long long ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    tPrime(n,ar);
    

}