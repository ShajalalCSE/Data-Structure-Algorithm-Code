#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int tt;
    cin>>tt;
    for(int i=1;i<=tt;i++){
        int n;
        cin>>n;
        map<int,int>mp;
        int tmp=n;
        for(int i=n;i>=2;i--){
            tmp=i;
            for(int j=2;j<=i;j++){
                while(tmp%j==0){
                    mp[j]++;
                    tmp=tmp/j;
             }
            }

        }
        cout<<"Case "<<i<<": "<<n<<" = ";
        int f=1;
        for(auto u:mp){
            if(f==1)
            cout<<u.first<<" ("<<u.second<<")";
            else{
                cout<<" * "<<u.first<<" ("<<u.second<<")";
            }
            f++;
        }
        cout<<endl;
    }


}