#include<bits/stdc++.h>
using namespace std;

int mysol(int n, int ar[]){

    int sum=0; // here sum=0 
    for(int i=0;i<n;i++){
        sum+=ar[i];
        
    }
    return sum;

}

int corsol(int n, int ar[]){
    int sum=1; // here sum=1 .so it always add extra 1 with my answer
    for(int i=0;i<n;i++){
        sum+=ar[i];
        
    }
    return sum;

}

int main(){

    srand(time(NULL));

    int tt=1;
    while(tt<=10){

        int n=rand()%100+1;
        int ar[n];
        for(int i=0;i<n;i++){
            ar[i]=rand()%100+1;
        }

        int myans= mysol(n,ar);
        int corans = corsol(n,ar);

        if(myans!=corans){
            cout<<n<<endl;
            cout<<"my ans: "<<myans<<" "<<"correct ans: "<<corans<<endl;
        }
       
        tt++;


    }


}