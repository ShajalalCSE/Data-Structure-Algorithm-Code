#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,e;
    cin>>n>>e;
    int ar[n+1][n+1];

    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            ar[i][j]=0;
        }
    }
    
    for(int i=0;i<e;i++){

        int u,v;
        cin>>u>>v;
        ar[u][v]=1;
        ar[v][u]=1;
    }

    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
           cout<< ar[i][j]<<" ";
        }
        cout<<endl;
    }

 }