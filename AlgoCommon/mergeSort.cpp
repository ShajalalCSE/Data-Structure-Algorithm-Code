#include<bits/stdc++.h>
using namespace std;

void merge(vector<int >&v,int low ,int mid, int high){
    vector<int >tmp;

    int left=low;
    int right= mid+1;

    while(left<=mid && right <=high){
        if(v[left]<=v[right]){
            tmp.push_back(v[left]);
            left++;
        }
        else{
            tmp.push_back(v[right]);
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
        int y=low;
        v[i]=tmp[i-low];
    }
}


void mergeSort(vector<int>&v,int low,int high){

    if(low>=high) return;
    int mid=(low+high)/2;
    mergeSort(v, low,mid);
    mergeSort(v,mid+1,high);

    merge(v,low,mid,high);

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

    mergeSort(v,0,n-1);

     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}