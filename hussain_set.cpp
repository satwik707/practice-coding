#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int n,m;
   cin>>n>>m;
   ll arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);
   int count_m=0;
   int end_p=n-1;
   queue<ll>q;
   int current_m;
   while(m--)
   {
       cin>>current_m;
       ll ans;
       for(;count_m<current_m;count_m++)
       {
           
           if( end_p>=0  && (arr[end_p]>=q.front()||q.empty()))
           {
               ans=arr[end_p];
               end_p--;
               
           }
           else
           {
               ans=q.front();
               q.pop();
           }
           q.push(ans/2);
       }
       cout<<ans<<endl;
   }

    return 0;
}
