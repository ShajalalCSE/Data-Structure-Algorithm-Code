#include<bits/stdc++.h>
using namespace std;

//#define endl '\n'
 /*jodi input newar sathe sathe output show korte hoy tahle ata use korar dorkar nai 
 r jodi akadhik input newa sesh hole erpor aksate output dewar dorkar hoy tahle #define endl '\n
 use korte hbe */

int main()
{
    //==============================topics===========================================
    //input
    //character add
    //iterator use kore string print
    //compare 2 string
    //reverse string
    //unique function
    //max min elemnet
    //string sort laxiographically
    //erase a character
    //substing ache kina
    //next_permutaion
    //using next_permutation in string,vector,array
    
//=========================================normal string input output=======================
    /*
    string s;
    cin>>s;
    cout<<s;
    */

    //============================space shoho string input=================
    /*
    string s;
    getline(cin,s);
    cout<<s;
    */

//======================test case use kore and space chara string input===============
    /*
    int tt;
    cin>>tt;
    while(tt--){
    string s;
    cin>>s;
    cout<<s<<endl;
    }
    */

//================================test case use kore and kivabe space shoho string input nibo==============================
    /*
    int tt;
    cin>>tt;
    for(int tc=1;tc<=tt;tc++) //space shoho string nite hole 17,18,19,20 line 4tar moto kore string nite hbe
    {     
    string st;
    char c;
    cin>>c;
    getline(cin,st);
    st=c+st;      //jodi st=st+c; lehko tahle first character ta string er last a add hbe
    cout<<"Case "<<tc<<": "<<st<<endl;
    }
    */

//==========================string a character add================================
    /*
    string st;
    st=st+'c';
    st=st+'b';
    st=st+'a';
    st=st+"tata";
    cout<<st.size()<<endl;
    cout<<st<<endl;
    st.clear();//ata use korle string ta empty hoye jabe
    cout<<st;
    cout<<st.empty();//jodi clear hoye thake tahle 1 print korbe r clear na hole 0 
    */

//=============================iterator use kore string print kora ============================
  /* 
   string st;
   st="muhammad shajalal";
   string::iterator it;
   for(it=st.begin();it!=st.end();it++)
   cout<< *it;
   cout<<endl;
   //for each loop use kore string print
   for(auto u:st) cout<<u;
   */
  
//=======compare string.2ta sting equal kina //time complexcity O(N). N holo choto string er length==
  /*
  string st1="jalal",st2="sha";
  if(st1==st2)cout<<"equal";
  else
  cout<<"not equal";
  */

 //=====================reverse string //complexcity O(n)=====================
     /*
      string st;
      st="jalalsha";
      reverse(st.begin(),st.end());
      cout<<st<<endl;
    */

//========================unique function use for find unique part.obossoy sort kore nite hbe====================
        /*
        string s;
        s="deacbAAA";
        sort(s.begin(),s.end());
        int sz =unique (s.begin(),s.end())-s.begin();

        for(int i=0;i<sz;i++)
        cout<<s[i];
        cout<<endl;
      */

//===============================max element and min element print==================================
         /*
           string s;
           s="deacbAAA";
           cout<< *max_element(s.begin(),s.end())<<endl;
           cout<<*min_element(s.begin(),s.end())<<endl;
          */

//=====================sort a string laxiographycaly.dictionary te jmn vabe word sajano thake=================
   /*
   vector<string>v;
   v.push_back("sha");
   v.push_back("shajalal");
   v.push_back("ok2");
   v.push_back("ok1");
   v.push_back("Zata");
   sort(v.begin(),v.end());

   for(auto u:v) cout<<u<<endl;
   */
   

//===============================erase a character =============================================================
 /*
  string st;
  st="abfhjfabtcab";
  st.erase(st.begin()); cout<<st<<endl;   //erase first charecter .complexcity O(1)
  st.erase(st.end()-1);cout<<st<<endl;    //erase last character.complexcity O(1)
  st.erase(remove(st.begin(),st.end(),'a'),st.end());   //erase specific character
  cout<<st<<endl;
  */

 // ==================akta string er sate onno arekta string er sub string kivabe add korbo
 /*
 string s;
 s="shajalal";
 string t;
 t="gada ruhi gada";
 copy(t.begin()+5,t.begin()+9,back_inserter(s));
 cout<<s<<endl;
 //output = shajalalruhi
 */

//===================================substring ache kina seta check kora================================
/*
string s;
s="shajalal";
if(s.find("lal")!=-1) cout<<"sub string exist";
else 
cout<<"sub string not exist";

//output=sub string exist

*/

//=================================next_permutation="abcd"=>"abdc"===============================
/*string s="abcd";
do{
  cout<<s<<endl; 
   // c++; if(c==k) break; jodi bole k shonkhok permutation ber koro tkhn use it
}while(next_permutation(s.begin(),s.end()));
*/

//================next permutation using  in vetctor .array teo use kora jay=====================

/*vector<int>v={1,2,3};
do{
  for(auto u:v) cout<<u<<" ";
  cout<<endl;
}while(next_permutation(v.begin(),v.end()));
//output =123,132,321.....
*/

//tolower use hoy character k convert korte.so string k convert korte hole loop use korte hbe
  
}