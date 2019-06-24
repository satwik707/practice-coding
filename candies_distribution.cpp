nclude<bits/stdc++.h>
using namespace std;
bool distributed(long long ar[],long long n,long long k,long long mid)
{
    long long persons=0;
    for(int i=0;i<n;i++)
    {
        persons+=ar[i]/mid;
    }
    if(persons>=k)
    {
        return true;
    }
    return false;
}

int main() {

	// Write your code here
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long ar[n];
        long long min=1;
        long long max=-1;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]>max)
            {
                max=ar[i];
            }
        }
        long long ans=0;
        
        while(min<=max)
        {
            int mid=min+(max-min)/2;
            if(distributed(ar,n,k,mid))
            {
                ans=mid;
                min=mid+1;
            }
            else
            {
                max=mid-1;
            }
        }
        cout<<ans<<endl;
        
    }
