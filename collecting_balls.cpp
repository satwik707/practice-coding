#include<bits/stdc++.h>
using namespace std;
bool findk(long long n,long long k)
{
   long long sum=0;
    long long current=n;
    long long b;
    while(current>=0)
    {
        sum=sum+min(current,k);
        current=current-k;
        current-=current/10;
    }
         if(2*sum>=n)
        {
            return true;
        }
        return false;
    
}
   
int main()
{
    long long n;
    cin>>n;
    long long min=1;
    long long max=n;
    long  long ans;
    while(min<=max)
    {
        long long mid=min+(max-min)/2;
        if(findk(n,mid))
        {
            ans=mid;
            max=mid-1;
        }
        else
        {
            min=mid+1;
        }
    }
    cout<<ans;
	return 0;
}
