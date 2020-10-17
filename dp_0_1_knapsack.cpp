#include<bits/stdc++.h>
using namespace std;

int man(int a,int b)
{
	if(a>b)
		return a;
	return b;
}

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
		int max_wt;
		cin>>n>>max_wt;
		// cout<<endl;
		struct  knapsack
		{
			int val;
			int wt;
		}knap[n];
		for(int i=0;i<n;i++)
		{
			cin>>knap[i].val;
		}
		for(int i=0;i<n;i++)
		{
			cin>>knap[i].wt;
		}
		int dp[n][max_wt+1];
		for(int j=0;j<=max_wt;j++)
		{
			int i=0;
			if(knap[i].wt<=j)
			{
				dp[i][j]=knap[i].val;
			}
			else
				dp[i][j]=0;
		}
		for(int i=0;i<n;i++)
		{
			dp[i][0] = 0;
		}
		for(int i=1;i<n;i++)
		{
			for(int j=1;j<=max_wt;j++)
			{
				if(knap[i].wt<=j)
				{
					dp[i][j] = max(knap[i].val+dp[i-1][j-knap[i].wt],dp[i-1][j]);
				}
				else
				{
					dp[i][j] = dp[i-1][j];
				}
			}
		}

		// for(int i=0;i<n;i++)
		// {
		// 	for(int j=0;j<=max_wt;j++)
		// 	{
		// 		cout<<dp[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
		cout<<dp[n-1][max_wt];
		cout<<endl;
	}
}