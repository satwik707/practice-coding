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
		int m,n;
		cin>>m>>n;
		string st1,st2;
		cin>>st1>>st2;
		// cout<<st1<<" "<<st2;
		int dp[m][n];
		int max = 0;
		for(int i=0;i<m;i++)
		{
			if(st2[0] == st1[i])
			{
				dp[i][0]=1;
			}
			else
				dp[i][0]=0;
			if(max<dp[i][0])
				max=dp[i][0];
			// cout<<dp[i][0]<<" ";
		}
		// cout<<endl<<max<<endl;
		for(int i=0;i<n;i++)
		{
			if(st1[0] == st2[i])
			{
				dp[0][i]=1;
			}
			else
				dp[0][i]=0;
			if(max<dp[0][i])
				max=dp[0][i];
			// cout<<dp[0][i]<<" ";
		}
		// cout<<st2[1]<<" "<<st1[2];
		for(int i=1;i<m;i++)
		{
			for(int j=1;j<n;j++)
			{
				if(st2[j]==st1[i])
				{
					// cout<<"hello"<<" ";
					dp[i][j] = dp[i-1][j-1]+1;
				}
				else
				{
					dp[i][j] = 0;
				}
				if(max<dp[i][j])
					max=dp[i][j];
			}
		}
		cout<<"  ";
		// for(int i=0;i<n;i++) TO Print the grid
		// {
		// 	cout<<st2[i]<<" ";
		// }
		// cout<<endl;
		// for(int i=0;i<m;i++)
		// {
		// 	cout<<st1[i]<<" ";
		// 	for(int j=0;j<n;j++)
		// 	{
		// 		cout<<dp[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
		cout<<max;
		cout<<endl;
	}
}