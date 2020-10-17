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
		int sum = 0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum=sum+arr[i];
		}
		int dp[n][sum];
		for(int i=0;i<sum;i++)
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

		}
		vector<int>vec;
		for(int i=0;i<sum;i++)
		{
			if(dp[n-1][i] == 1)
				vec.push_back(i+1);
		}
		int min_val = INT_MAX;
		for(int i=0;i<vec.size()/2;i++)
		{
			min_val = min(sum-2*vec[i],min_val);
		}
		cout<<min_val;
		cout<<endl;
	}
}