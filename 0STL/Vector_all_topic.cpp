#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{

    //==================topic=================================================================
    //vector declar
    //input output newa
    //vector copy kora
    //iterator use
    //for each loop
    //array vector sort kora
    //vector revesrse
    //select kore kono elemnt er upor operation calano
    //unique function 
    //min max ber kora 
    //2D vector use kora

//===================vector declar ============================================================

//vector<int>v; / vector<string> st; /vector<double>v;/ vector<vector<int>>v;
    
// ============================vector a input newa ============================================
//vector slower then array 

   /*
   vector<int>v;  
    v.push_back(2);                //v={2}
    v.push_back(3);                //v={2,3}
    v.push_back(5);                //v={2,3,5}
    v.push_back(7);                //v={2,3,5,7}

    cout<<v[2]<<endl;               //5 print korbe

    for(int i=0;i<v.size();i++)      //print all element
    cout<<v[i]<<" ";

    */

   //=================vector er size diye dile tkhn kivabe input nibo and out put dibo=========================
    /*
    int n;
    cin>>n;
   vector<int>v;         //vector<int>v(n) likhle tkhn full arrayr moto kore input nibo,push back lagbe na
   for(int i=0;i<n;i++)
   {
    int a;
    cin>>a;
    v.push_back(a);
   }
   cout<<v.size()<<endl;
   for(int i=0;i<v.size();i++)
   {
    cout<<v[i]<<" ";
   }
   */

  //v.empty()
  //v.resize(n)

//================================vector er element onno vector a  copy kora=====================================
  /*
  vector<int>v={2,3,4};
  vector<int>temp;
  temp=v;
  for(int i=0;i<temp.size();i++)
  cout<<temp[i]<<" ";
  */

 //=================================vector iterator er implimentation=========================================

        /*
        vector<int>v={2,3,4,5};

        vector<int>::iterator it;

        for(it=v.begin();it!=v.end();it++){
           cout<< *it <<" ";
        }
        cout<<endl;
        */
 //=======================for each loop implement=======================================================
  /*
    vector<int >v={2,3,4,5,6};
    for(auto u:v)              //ekhane v er akta akta elemnt u er modde copy hoy and prnt kore
    {
           u+=2;               //jodi u er modde kono kaj korte hoy seta evabe korbo onnothay direct print korbo
         cout<<u<<" ";
    }
    cout<<endl;
    */

   //======================array and vector sort kora============ complexcity O(nlogn)===========================

   /*
   int a[]={2,5,2,3,6};
   sort(a+0,a+4);
   for(int i=0;i<5;i++)
   cout<<a[i]<<" ";
   cout<<endl;

   //==================================vector sort kora==============================================

   vector<int >v={5,6,2,3,4,9};

   sort(v.begin(),v.end()); //sort(v.begin(),v.begin()+3);   ata korle 3index porjonto sort korbe
   for(auto u:v)            //sort(v.begin(),v.end(),greater<int>());   decending order a sort korbe
   cout<<u<< " ";           //sort(v.rbegin(),v.rend());    decending oreder a sort korbe
   cout<<endl; 
   */ 

   // ================================= vector reverse============================================================

   /*
   vector<int>v={3,5,6,7,8,2,13,9};
   reverse(v.begin(),v.end());
   for(auto u:v)
    cout<<u<<" ";
    cout<<endl;
    */

   //==============================element select kore operation calano====================================

   /*
   vector<int>v={2,3,4,8,1,2,5};
   cout<<v.back()<<endl;    //last element print kora .complexcity O(1).
   v.pop_back();            //last element delete kora .complexcity O(1).

   cout<<*v.begin()<<endl;  ///fisrt elemnt print kora

   //jodi kkno first elemnt k delete korte hoy tahle age reverse korbo er por pop back diye dlt kore abar reverse korbo
   //complexcity O(n);
   //jodi reverse na kore first element dlt kori tahle complexcity O(n*n)

   */

//======================unique function use kore unique element khuje ber kora==============total complexcity O(nlogn).only unique er O(n) 
       /*
       vector<int >v={3,7,1,9,3,4,5,9,3};

       sort(v.begin(),v.end());

       int size= unique(v.begin(),v.end())-v.begin();  //unique part er size ber korar jonno obossoy v.begin() minus korte hbe na hoy error dibe

       cout<<"size of unique element="<<size<<endl;

       for(int i=0;i<size;i++) cout<<v[i]<<" ";
       cout<<endl;
       */

//=======max min ber kora =========================================min er jonno just max er jaygay min likhley hbe

      /*
      vector<int>v={2,5,6,7,3,9,7,8,1};

      vector<int>::iterator it = max_element(v.begin(),v.end());   //jehetu iterator index return kore tai pointer use kore print korte hoy
      cout<< *it<<endl;

      int n=max_element(v.begin(),v.end())-v.begin(); //max element er index ber korar jonno
      cout<<"max er index="<<n<<endl;
      */

//===========================2D vector===============================================

      /*
      vector<vector<int>>v;

     vector<int>a1={2,3,4};
     vector<int>a2={2,3,4,5,6};

     v.push_back(a1);
     v.push_back(a2);

     for(auto u:v){
      for(auto g:u) cout<<g<<" ";
      cout<<endl;
     }
     */
}