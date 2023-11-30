#include<bits/stdc++.h>
using namespace std;

int longest(int ar[],int n){
    int sum=0;
    int mx=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        sum+=ar[i];
        if(sum==0) mx=i+1;
        else{
            if(mp.find(sum)!=mp.end()){
                mx=max(mx,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
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

    int res=longest(ar,n);
    cout<<res<<"\n";
}