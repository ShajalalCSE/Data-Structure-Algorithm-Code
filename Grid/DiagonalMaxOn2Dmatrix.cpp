#include<bits/stdc++.h>
using namespace std;


int f(int i,int j,vector<vector<int>>&v){

    if(i==0 and j==0) return v[i][j];

    int tmp= v[i][j];
    int  mx= f(i-1,j-1,v);
    return max(mx,tmp);  
}


int main(){

    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    vector<vector<int>>dp(n,vector<int>(n,-1));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i][j]=x;
        }
    }
    

    int res= f(n-1,n-1,v);
    cout<<res<<endl;


    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //        cout<< v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
    intput:
    3
    9 8 7
    6 5 4
    3 2 1
    output: 9
    */

}