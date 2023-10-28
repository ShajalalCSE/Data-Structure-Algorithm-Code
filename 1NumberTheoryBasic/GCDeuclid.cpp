#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int  gcd(long long a,long long b){

    while(a>0 and b>0){

        if(a>b)
            a=a%b;
        else
            b=b%a;
    }
    if(a==0) return b;
    
    else return a;
}

int main(){
    ll a,b;
    cin>>a>>b;
    
    cout<<gcd(a,b);

}