#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;

    string st,st1,st2;

    while(n>0){
        int x=n%10;
        n=n/10;
        st+=to_string(x);
    }

    sort(st.begin(),st.end());
   for(int i=0;i<st.size();i++){
    if(i%2==0)
    st1+=st[i];
    else st2+=st[i];

   }

   int num1=stoi(st1);
   int num2= stoi(st2);
   cout<<num2+num1<<endl;


}