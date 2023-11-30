#include<bits/stdc++.h>
using namespace std;

void Dutch(int n,int ar[])
{
    int low=0;
    int high=n-1;
    int mid=low;
    for(int i=0;i<n;i++){
        if(ar[mid]==0){
             swap(ar[low],ar[mid]);
             mid++;
             low++;
        }
        else if(ar[mid]==1){
            mid++;
        }
        else if(ar[mid]==2){
            swap(ar[mid],ar[high]);
            high--;
        }

    }

    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    Dutch(n,ar);

}