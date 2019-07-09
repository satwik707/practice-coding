#include<bits/stdc++.h>
using namespace std;
void swap(int ar[],int i,int j)
{
    int t=ar[j];
    ar[j]=ar[i];
    ar[i]=t;
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        int flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int i=0;
        int j=1;
        while(j<=n-1)
        {
            if(ar[i]>ar[j])
            {
                if(ar[i]-ar[j]==1)
                {
                    swap(ar[i],ar[j]);
                }
                else
                {
                    flag=1;
                    cout<<"No"<<endl;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
            
            i++;
            j++;
        }
        if(flag==0)
        {
            cout<<"Yes"<<endl;
        }
    }
    
	return 0;
}
