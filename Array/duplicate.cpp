#include<bits/stdc++.h>
using namespace std;

pair<int,int> dup(int n,int ar[]){

   vector<int >v(n+1,0);
   int dup=0;
   int miss=0;
   for(int i=0;i<n;i++){
    v[ar[i]]++;
    if(v[ar[i]]==2) dup= ar[i];

    for(int i=1;i<=n;i++){
        if(v[i]==0){

         miss=i;
         break;
        }
    }




   }
   return {dup,miss};
}


int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    cout<<dup(n,ar).first<<" "<<dup(n,ar).second<<"\n";

}