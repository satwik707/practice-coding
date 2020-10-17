#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" ,stdin);
	freopen("output.txt", "w" ,stdout);
	#endif

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int dp[n];
		for(int i=0;i<n;i++)
		{
			dp[i]=1;
		}
		int max=1;
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(arr[i]>arr[j] && dp[i]<=dp[j])
				{
					dp[i]=dp[j]+1;
				}
				if(max<dp[i])
					max=dp[i];
			}
		}
		cout<<max<<endl;

	}
}