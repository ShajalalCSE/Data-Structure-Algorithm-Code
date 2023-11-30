#include<bits/stdc++.h>
using namespace std;

int  merge(vector<int>&v,int low,int mid,int high){
    int cnt=0;
    vector<int>tmp;

    int left=low;
    int right=mid+1;

    while(left<=mid && right<=high){
        if(v[left]<=v[right]){
            tmp.push_back(v[left]);
            left++;
        }
        else{
            tmp.push_back(v[right]);
            cnt+=(mid-left+1);
            right++;
        }
    }

    while(left<=mid){
        tmp.push_back(v[left]);
        left++;
    }
    while(right<=high){
        tmp.push_back(v[right]);
        right++;
    }

    for(int i=low;i<=high;i++){
        v[i]=tmp[i-low];
    }

    return cnt;
}

int  mergeSort(vector<int>&v,int low,int high){
    int cnt=0;
    if(low>=high) return cnt;
    int mid=(low+high)/2;
    cnt+=mergeSort(v,low,mid);
   cnt+= mergeSort(v,mid+1,high);
    cnt+=merge(v,low,mid,high);

    return cnt;
}

int main(){
    int n;
    cin>>n;
    vector<int >v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

   int res= mergeSort(v,0,n-1);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n"<<res<<"\n";

}