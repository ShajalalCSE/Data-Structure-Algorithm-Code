#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1000000;

bool sieve[N+1];
void createSieve(){

    memset(sieve ,true,sizeof(sieve));//you can use memset only in bool array
   
    for(ll i=2;i<=N;i++){
        if(sieve[i]==true){
            for(ll j=i*i;j<=N;j+=i){
                sieve[j]=false;
            }
        }
    }
}

vector<int>generatePrime(int k){
    vector<int >ds;
    for(int i=2;i<=k;i++){
        if(sieve[i]==true){
            ds.push_back(i);
        }
    }
    return ds;
}

int main(){

    createSieve();
    int tt;
    cin>>tt;
    while(tt--){

        ll l,r; //l and r can be <=10e12 but r-l<=10e6;
        cin>>l>>r;

        //step1: generate all prime til sqrt(r)
        vector<int>primes= generatePrime(sqrt(r));

        //step2:creating dummy array of size r-l+1
        int dummy[r-l+1];
        for(int i=0;i<r-l+1;i++){
            dummy[i]=1;
        }

        //step3: for all primenumber marks its multiple false

        for(auto pr:primes){

            int firstMultiple =(l/pr)*pr;

            if(firstMultiple<l)firstMultiple+=pr;

            for(int j=max(firstMultiple,pr*pr);j<=r;j+=pr){
                dummy[j-l]=0;
            }
        }

            //step4:get all prime from l to r.
            for(int i=l;i<=r;i++){
                if(dummy[i-l]==1) //here notice index is i-l
                cout<<i<<" ";
            }
            cout<<endl;
        }
        
    }

//youtube link: https://www.youtube.com/watch?v=MY0fXk-3BVQ&t=2082s