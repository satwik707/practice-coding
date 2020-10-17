#include <bits/stdc++.h>
using namespace std;
int min_value(int a, int b);

int min_value(int a, int b)
{
	if(a<b)
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
		cin>>n;
		int arr[10][n+1];
		int denom[10]={1,2,5,10,20,50,100,200,500,2000};
		for(int i=0;i<=n;i++)
		{
			arr[0][i]=i;
		}
		// cout<<n<<endl;
		// cout<<arr[0][35];
		for(int i=0;i<10;i++)
		{
			arr[i][0]=0;
		}
		// cout<<denom[9];
		for(int i=1;i<10;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(j-denom[i]>=0)
				{
					arr[i][j] = min_value(arr[i-1][j],arr[i][j-denom[i]]+1);
				}
				else
				{
					arr[i][j] = arr[i-1][j];
				}
			}
		}
		int i=9,j=n;
		vector<int>vec;
		while(arr[i][j]!=0)
		{
			if(arr[i-1][j] == arr[i][j])
			{
				i--;
				// vec.push_back(arr[i][j]);
			}
			else
			{
				j=j-denom[i];
				vec.push_back(denom[i]);
			}
		}
		for (int i = 0; i < vec.size(); ++i)
		{
			cout<<vec[i]<<" ";
		}
		// cout<<arr[9][n];
		cout<<endl;
	}
}