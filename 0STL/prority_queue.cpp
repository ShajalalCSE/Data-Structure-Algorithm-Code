#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int >v;
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"elements of vector: "<<endl;
    for(auto u:v){
        cout<<u<<" ";
    }
    cout<<endl;

    cout<<"elements of priority queue: "<<endl;
    priority_queue<int>pq;

    for(int i=0;i<n;i++){
        pq.push(v[i]);
    }

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();

    }


}