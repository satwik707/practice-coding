#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n+1];
		arr[0]=0;
		arr[1]=1;
		arr[2]=2;
		for(int i=3;i<=n;i++)
		{
			if(i%2==1)
			{
				arr[i]=arr[i-1]+1;
			}
			else
			{
				arr[i]=arr[i/2]+1;
			}
		}
		cout<<arr[n];
		cout<<endl;
	}
}