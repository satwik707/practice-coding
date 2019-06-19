#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string s;
    vector<string>names;
  
    while(cin>>s)
    {
        names.push_back(s);
    }
    map<string,int>m;
    for(int i=0;i<names.size();i++)
    {
        m[names[i]]++;
    }
     map<string,int>::iterator it;
    int flag=0;
    for( it=m.begin();it!=m.end();it++)
    {
        if((it->second)>=2)
        { 
            flag=1;
            cout << it->first <<" "<<it->second<<endl;
        }
    }
    if(flag==0)
    {
        cout<<-1;
    }
    
    
    
    
	return 0;
}
