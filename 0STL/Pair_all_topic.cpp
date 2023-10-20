#include <bits/stdc++.h>
using namespace std;
int main()
{

    //=========c lenguage er struct and c++ er pair same operation=============

    //=================================pair declar kora==============================================
    // pair<int ,int>s;
    // pair<string,int>q;
    // pair<string,vector<int>>r;

    /*
        pair<int , int> p;
        p.first=2;
        p.second=3;
        cout<<p.first<<"=>"<<p.second<<endl;
      */

    /*
       pair<string,vector<int>>pa;
       pa.first="shajalal";
       pa.second={1,2,3};
       cout<<pa.first<<endl;
       for(auto u: pa.second) cout<<u<<" ";
       cout<<endl;
    */

    //=====================================pair initialize kora====================================

    /*
      pair<int ,int>p;

      p={2,3}; //atar poriborte  p=make_pair(2,3); atao lekha jay.same kotha

      cout<<p.first<<" "<<p.second<<endl;

      p.first+=4;
      cout<<p.first<<endl;
    */

    /*
     pair<string,vector<int>>p;

     p={"shajalal",{1,2,3,4,5}};
     cout<<p.first<<" "<<p.second.size()<<endl;//vector jevabe print kore same vabe print kora jabe vector part ta
   */

    //============================pair a input newa======================================
    /*
    pair<int,int>p;

    cin>>p.first>>p.second;
    cout<<p.first<<" "<<p.second<<endl;
    */

    //=========================2ta pair er modde compare kora ===================================

    /*
      pair<int ,int>p1,p2;
      p1={2,3};
      p2={3,2};

      if(p1<p2) cout<<"yes\n";

      pair<int ,int> p = min(p1,p2);  //========max min ber kora====================================
      cout<<p.first<<" "<<p.second<<endl;
   */

    //======================vector of pair============================================================

    /*
    vector<pair<int ,int>>v;
    v.push_back({6,5});
    v.push_back({2,3});
    v.push_back({4,5});
    v.push_back({6,1});
    v.push_back({1,9});

    sort(v.begin(),v.end());
    for(auto u:v) cout<<u.first<<" "<<u.second<<endl;
    */

    //=====================array of pair================================
    /*
    pair<int,int>p[]={{6,5},{2,3},{4,5},{6,1},{1,9}};

    sort(p,p+5);

    for(int i=0;i<5;i++)
    cout<<p[i].first<<" "<<p[i].second<<endl;
    */

    //=====================pair sort hoy first value k priority diye===============
    /*
    vector<pair<string,int>>v;

    v.push_back({"asha",4});
    v.push_back({"jalal",1});
    v.push_back({"sha",4});
    v.push_back({"amir",4});
    v.push_back({"sha",3});

    sort(v.begin(),v.end());

    for(auto u:v) cout<<u.first<<" "<<u.second<<endl;
    */
/*===============noraml sort a pair er 1st element choto hole seta upore thake r=====================
               1st equal hole second value k checkkore 
              seta upore thake .jodi kkno amn hoy j 1st value boro  
              onushare and second value choto onushare sajate
              hbe tkhn kmne korbo
     problem=    https://codeforces.com/contest/166/problem/A       
*/
//===================solve=================================
/*
int n,k;
cin>>n>>k;
vector<pair<int ,int>>v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i].first>>v[i].second;
    v[i].first *= -1;
}
sort(v.begin(),v.end());
int ans=0;
for(auto u:v){
    if(u==v[k-1]) ans++;
}
cout<<ans<<endl;
*/

//===================unique function use kore unique value ber kora===========================
    /*
    vector<pair<string,int>>v;

    v.push_back({"asha",4});
    v.push_back({"jalal",1});
    v.push_back({"sha",4});
    v.push_back({"amir",4});
    v.push_back({"sha",4});
    v.push_back({"jalal",1});

    sort(v.begin(),v.end());

    int sz=unique(v.begin(),v.end())-v.begin();

    for(int i=0;i<sz;i++)
    cout<<v[i].first<<" "<<v[i].second<<endl;
    */
    //=========================pair of vector a input newa and output dewa================================
    //========================paractice problem===========
    /*
    int n;
    cin >> n;                             //n=4
    vector<pair<string, string>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;    //u u, u v, j k,  u,u
    }

    sort(v.begin(), v.end());

    int sz = unique(v.begin(), v.end()) - v.begin();

    cout << sz << endl;

    for (int i = 0; i < sz; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;  // output j k, u u, u v
    }
    */
}