#include<bits/stdc++.h>
using namespace std;
bool compare(const pair<long long,long long> &a,const pair<long long,long long>&b)
{
    return a.second < b.second;
}
int main()
{
    //Write your code here
     ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    long long n;
    cin>>n;
    vector<pair<long long,long long>>v;
    for(int i=0;i<n;i++)
    {
        long long start,end;
        cin>>start>>end;
        v.push_back(make_pair(start,end));
        
    }
    sort(v.begin(),v.end(),compare);
    long long c=1;
    int y=0;
    for(int i=1;i<n;i++)
    {
        if(v[i].first>=v[y].second)
        {
            y=i;
            c++;
        }
    }
    cout<<c;
    
    return 0;
}
