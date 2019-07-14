#include<bits/stdc++.h>
using namespace std;
struct job{
        int start,finish,profit;
    };
int binary(job arr[],int current_start,int e)
{
    int s=0;
    int max=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid].finish>current_start)
        {
            e=mid-1;
        }
        else
        {
            if(max<=mid)
            {
                max=mid;
            }
             s=mid+1;
        }
    }
    return max;
}
bool compare(job a,job b)
{
    return a.finish<b.finish;
}
int function1(job arr[],int n)
{
    sort(arr,arr+n,compare);
    int* dp=new int[n];
    
    dp[0]=arr[0].profit;
    for(int i=1;i<n;i++)
    {
        int including=arr[i].profit;
        int lnconflicting=binary(arr,arr[i].start,i-1);
       /* for(int j=i-1;j>=0;j--)
        {
            if(arr[j].finish<=arr[i].start)
            {
                lnconflicting=j;
                break;
            }
        } */
        
        if(lnconflicting!=-1)
        {
        including+=dp[lnconflicting];
        }
        dp[i]=max(including,dp[i-1]);
    }
    int ans=dp[n-1];
    return ans;
    delete[] dp;
}
int main()
{
    //Write your code here
     ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    int n;
    cin>>n;
    job arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].start>>arr[i].finish>>arr[i].profit;
    } 
    
    cout<<function1(arr,n);
    
    return 0;
}
