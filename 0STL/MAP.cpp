
/* map use kora hoy muloto kono string ba array er freequency ber korar jonno.
map<int,int>m /map<string,int>m aro onk vabey lekha jay.
ekhane m[x] dewa hole 'x' key element hisebe
kaj korbe. 
*/
//MAP er time complexcity O(nlogn) 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin); //file thek input nile ata use koro
    //freopen("output.txt", "w", stdout);//file a output dekhte caile ata use koro

    int size;
    cin>>size;
    int ary[size];             

    for(int i=0;i<size;i++)               //if size=10 
    cin>>ary[i];                         //and ary[]={10,30,20,30,20,10,20,40,50,10}

    map<int ,int>m;
    for(int i=0;i<size;i++)
    m[ary[i]]++;                           //ary[i] holo key element.so map er modde key element key rakha hoy

    for(auto it:m)
    {
        cout<<it.first<<"=>"<<it.second<<endl;  //10=>3 ,20=>3 ,30=>2 ,40=>1 ,50=>1
    }

    return 0;
}