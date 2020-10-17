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
		long long n;
		long long flag = 0;
		cin>>n;
		long long arr[n];
		long long sum = 0;
		for(long long i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		// cout<<sum;
		if(sum%2 == 1)
			cout<<"NO";
		else
		{
			sum = sum/2;
			// cout<<sum;
			long long dp[n][sum];
			memset(dp,-1, sizeof(dp));
			for(long long i=0;i<sum;i++)
			{
				if(arr[0] == i+1)
					dp[0][i] = 1;
				else
					dp[0][i] = 0;
			}
			for(long long i=1;i<n;i++)
			{
				for(long long j=0;j<sum;j++)
				{
					if(arr[i] > j+1)
					{
						dp[i][j] = dp[i-1][j];
					}
					else if(arr[i] == j+1)
					{
						dp[i][j] = 1;
					}
					else
					{
						if(dp[i-1][j] == 0)
							dp[i][j] = dp[i-1][j-arr[i]];
						else
							dp[i][j] = dp[i-1][j];
					}
				}
				if(dp[i][sum-1] == 1)
				{	
					flag = 1;
				}
			}
			// for(int i=0;i<n;i++)
			// {
			// 	for(int j=0;j<sum;j++)
			// 	{
			// 		cout<<dp[i][j]<<" ";
			// 	}
			// 	cout<<endl;
			// }
			if(flag)
				cout<<"YES";
			else
				cout<<"NO";
		}

		cout<<endl;
	}
}