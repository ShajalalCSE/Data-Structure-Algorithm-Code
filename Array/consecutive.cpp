#include<bits/stdc++.h>
using namespace std;

int cons(int ar[],int n){
    sort(ar,ar+n);

    int mx=INT16_MIN;
    int last;
    int cnt=1;
    for(int i=1;i<n;i++){
        last=ar[i-1];
        if(last+1==ar[i]){
            cnt++;
            mx=max(mx,cnt);
        }
        else if(last==ar[i]){
            continue;
        }
        else{
            cnt=1;
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
    int res=cons(ar,n);
    cout<<res<<"\n";
}