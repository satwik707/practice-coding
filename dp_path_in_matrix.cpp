#include<bits/stdc++.h>
using namespace std;

int max_three(int a,int b, int c)
{
	if(a>b && a>c)
		return a;
	if(b>a && b>c)
		return b;
	else
		return c;
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
		cin>>n;
		int arr[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>arr[i][j];
			}
		}

		int dp[n][n];
		for(int i=0;i<n;i++)
		{
			dp[0][i] = arr[0][i];
		}
		int m = 0;
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(j==0)
				{
					dp[i][j] = arr[i][j] + max(dp[i-1][j],dp[i-1][j+1]);
				}
				else if(j==n-1)
				{
					dp[i][j] = arr[i][j] + max(dp[i-1][j],dp[i-1][j-1]);
				}
				else
				{
					dp[i][j] = arr[i][j] + max_three(dp[i-1][j],dp[i-1][j-1],dp[i-1][j+1]);
				}
				m = max(dp[i][j],m);
			}
		}
		cout<<m;
		cout<<endl;
	}
}