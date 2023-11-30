#include<bits/stdc++.h>
using namespace std;

int ntroot(int n,int m){

    int low=1;
    int high=m;

    while(low<=high){
        int mid=(low+high)/2;
        
        long long check=1;
        
        for(int i=0;i<n;i++){
            check*=mid;
            if(check>m) break;
        }

        if(check==m) return mid;
        else if(check<m) low=mid+1;
        else high=mid-1;
    }

    return -1;
}

int main(){
    int n,m;
    cin>>n>>m;
    int res=ntroot(n,m);
    cout<<res<<"\n";
}