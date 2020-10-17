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
		for (int i = 0; i < n; ++i)
		{
			/* code */
			dp[i] = 0;
		}
		dp[0] = 0;
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(arr[j]+j >= i)
				{
					if(dp[i]==0 || dp[j]+1 < dp[i])
					{
						dp[i] = dp[j]+1;
					}
				}
			}
		}
		// for (int i = 0; i < n; ++i)
		// {
		// 	 code 
		// 	cout<<dp[i]<<" ";
		// }
		if(arr[0] == 0)
			cout<<0;
		else
		cout<<dp[n-1];
		cout<<endl;
	}
}