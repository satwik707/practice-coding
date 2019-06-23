#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>>intervals;
        for(int i=0;i<n;i++)
        {
            int arr,dep;
            cin>>arr>>dep;
            intervals.push_back(make_pair(arr,dep));
        }
        sort(intervals.begin(),intervals.end());
       
        while(m--)
        {
            int current_m;
            cin>>current_m;
             int position=lower_bound(intervals.begin(),intervals.end(),make_pair(current_m,0))-intervals.begin();  
             if(position==0)
             
             {
                 cout<<intervals[0].first-current_m<<endl;
             }
             else
             {
                 int ans=-1;
                 if(intervals[position-1].second>current_m)
                 {
                     ans=0;
                    // cout<<ans<<endl;
                 }
                 else if(position<intervals.size())
                 {
                     ans=intervals[position].first-current_m;
                   //  cout<<ans<<endl;
                 }
                 cout<<ans<<endl;
                
             }
             
            
        }
    }

    return 0;
}
