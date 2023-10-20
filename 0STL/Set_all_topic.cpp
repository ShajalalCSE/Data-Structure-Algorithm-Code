 
 ///set er complexcity O(log2(n))
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    //=====================set declare kora +initialize kora+output dewa======================
    
    set<int >s ={1, 1, 2, 3, 3, 4, 2};
    cout<<s.size()<<endl;
    for(auto u:s) cout<<u<<" ";
    cout<<endl;
    
   //======================set iterator=====================================
   /*
    set<int >s ={1, 1, 2, 3, 3, 4, 2};

    set<int>:: iterator it;
    for(it =s.begin(); it!=s.end();it++) cout<<*it<<" "; //it er age * dite hbe ;
    cout<<endl;
    */
   //========set clear nad empty kina=====================
   /*
    set<int >s ={1, 1, 2, 3, 3, 4, 2};
    s.clear();
    cout<<s.empty() <<endl;
    */

   //========set element insert kora .push back er moto==============
   /*
    set<int >s ={1, 1, 2, 3, 3, 4, 2};
   // s.clear();
    s.insert(2);
    s.insert(9);
    s.insert(10);
    cout<<s.size()<<endl;
    for(auto u:s) cout<<u<<" ";
    cout<<endl;
    */

   //=================set a kono element ache nki nai check kora====================
   /*
    set<int >s ={1, 2, 3, 3, 4, 2};

     for(auto u:s) cout<<u<<" ";
    cout<<endl;

    cout<<s.count(2)<<endl;     //2 ache nki nai set check korbe.thake 1 pirint korbe otherwise 0

    cout<<*s.begin()<<endl;       //first element print krbe

    cout<<*(--s.end())<<endl;      //last element print korbe
   */

   //=============element dlt kora=========================
   /*
    set<int >s ={1, 2, 3, 3, 4, 2};

    for(auto u:s) cout<<u<<" ";
    cout<<endl;

    s.erase(3);         // 3 element k delete korbe 

    for(auto u:s) cout<<u<<" ";
    cout<<endl;

    s.erase(*s.begin());   //first element delete korbe

      for(auto u:s) cout<<u<<" ";
    cout<<endl;

    s.erase(--s.end());         //last element k delete korbe

      for(auto u:s) cout<<u<<" ";
    cout<<endl;
    */

   //==================set of string ===============================
   
   /*
   set<string>st;
   st.insert("shajalal");
   st.insert("shhalal");
   st.insert("jfdhfjalal");
   st.insert("tytrfnjalal");
   st.insert("shhfhfalal");
   st.insert("tyuyjalal");
   st.insert("shajalal");

   cout<<st.size()<<endl;
   for(auto u:st) cout<<u<<endl;
   cout<<endl;
   */

  //====================set of pair============================

  /*
  set<pair<int,int>>s;

  s.insert({2,3});
  s.insert({4,3});
  s.insert({3,2});
  s.insert({5,2});
  s.insert({5,3});
  s.insert({4,1});
  s.insert({2,3});

  cout<<s.size()<<endl;
  for(auto u:s)cout<<u.first<<" "<<u.second<<endl;

  */

 //================greater order a set print kora========================

 /*

  set<int,greater<int>>s;     //greater comparetor use kore boro theke choto print kora

  s.insert(2);
  s.insert(5);
  s.insert(6);
  s.insert(9);

  cout<<s.size()<<endl;
  for(auto u:s) cout<<u<<" ";
  cout<<endl;

  set<string,greater<string>>st;       //string k boro theke choto order a sajabe
   st.insert("shajalal");
   st.insert("shhalal");
   st.insert("jfdhfjalal");
   st.insert("tytrfnjalal");
   st.insert("shhfhfalal");
   st.insert("tyuyjalal");
   st.insert("shajalal");

   cout<<st.size()<<endl;
   for(auto u:st) cout<<u<<endl;
   cout<<endl;

  */
 //================greater comperator for pair=========================

 /*
  set<pair<int,int>,greater<pair<int ,int>>>s;

  s.insert({2,3});
  s.insert({4,3});
  s.insert({3,2});
  s.insert({5,2});
  s.insert({5,3});
  s.insert({4,1});
  s.insert({2,3});

  cout<<s.size()<<endl;
  for(auto u:s)cout<<u.first<<" "<<u.second<<endl;

  */

 //====================unorder set=====================

 /*
 unordered_set<int> s;

  s.insert(2);
  s.insert(2);
  s.insert(5);
  s.insert(4);
  s.insert(9);

  cout<<s.size()<<endl;
  for(auto u:s) cout<<u<<" ";
  cout<<endl;
  */



 


 }
