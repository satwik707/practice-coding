#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Write your code here
    long long n;
    cin>>n;
    long long ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n, greater<int>());
    long int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=ar[i]*(pow(2,i));
       // int a=1<<i;
     //   cout<<a<<endl;
      //  cout<<ar[i]<<endl;
    }
    cout<<ans;
    return 0;
}
