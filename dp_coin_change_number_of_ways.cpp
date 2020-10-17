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
		int val;
		cin>>val;
		int dp[n][val+1];
		for(int i=0;i<=val;i++)
		{
			if(i%arr[0] == 0)
				dp[0][i] = 1;
			else
				dp[0][i] = 0;
		}
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<=val;j++)
			{
				if(arr[i]>j)
					dp[i][j] = dp[i-1][j];
				else
					dp[i][j] = dp[i-1][j] + dp[i][j-arr[i]];
			}
		}
		// for(int i=0;i<n;i++)
		// {
		// 	for(int j=0;j<=val;j++)
		// 	{
		// 		cout<<dp[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
		cout<<dp[n-1][val];
		cout<<endl;
	}
}