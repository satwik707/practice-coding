#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,string>p1,pair<int,string>p2)
{
    return p1.first>p2.first;
}
int main()
{
    int n;
    cin>>n;
    string str[n];
    int m1,m2,m3;
    
    int sum[n];
    for(int i=0;i<n;i++)
    {
      sum[i]=0;
    }
    
    for(int i=0;i<n;i++)
    {
        cin>>str[i]>>m1>>m2>>m3;
        sum[i]=m1+m2+m3;
    }
     vector<pair<int,string>>v;                         //vector me sum aur name ka pair bnane k liye
     for(int i=0;i<n;i++)
    {
         v.push_back(make_pair(sum[i],str[i]));         //making pair
     }
    
    stable_sort(v.begin(),v.end(), compare);        //stable sort se agar same h dono toh original array ka order follow hota h 
                                                      // decending k liye greater<int> nhi use kiya because conusion hoga function ko ki kis' 
                                                      //basis par sort karna h >name ya sum
    
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<" "<<v[i].second<<endl;        //ese retrive karte h vector k pair ko
    }
      
    
    
    
	return 0;
}
