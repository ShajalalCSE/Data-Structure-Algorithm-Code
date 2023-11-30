#include<bits/stdc++.h>
using namespace std;

void tarsum(vector<int>&v,int n,int target){
    unordered_map<int,int>mp;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        int need=target-v[i];
        if(mp.find(need)!=mp.end()){
            cout<<"yes\n";
           return;
        }
        mp[v[i]]=i;
    }
    cout<<"no\n";
}
int main(){
     int n;
     cin>>n;
     int target;cin>>target;
     vector<int >v;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);

     }
     tarsum(v,n-1,target);
}