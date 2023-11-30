#include<bits/stdc++.h>
using namespace std;

int stock(int n,int ar[]){
    int mx=INT16_MIN;
    int mn=INT16_MAX;
    for(int i=0;i<n;i++){

        mn=min(ar[i],mn);
        mx=max(ar[i]-mn,mx);

    }

    return mx;
}
int main(){

    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    int res=stock(n,ar);
    cout<<res<<endl;
}