#include<bits/stdc++.h>
using namespace std;
int bsearch(int ar[],int n,int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(ar[mid]==target) return mid;
        else if(ar[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return -1;

}

int main(){
    int n;
    int target;
    cin>>n;
    cin>>target;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    int res=bsearch(ar,n,target);
    cout<<res<<"\n";
}