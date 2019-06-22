#include<bits/stdc++.h>
using namespace std;
#define MAXN 100005
long long merge_inv(int a[], int left, int mid_1, int right)
{
    int i=left,j=mid_1,k=0;
    int tempArr[right-left+1];   
    long long cnt=0;
    while(i<mid_1 && j<=right)    
    {
        if(a[i]<=a[j])
        {
            tempArr[k++]=a[i++];     
        }
        else
        {
            tempArr[k++]=a[j++];
            cnt+=(mid_1-i);
        }
    }
    while(i<mid_1)
        tempArr[k++]=a[i++];
    while(j<=right)
        tempArr[k++]=a[j++];
 
    for(int i=left, k=0;i<=right;i++,k++)
        a[i]=tempArr[k];
    return cnt;
}
long long mergeSort(int a[], int left, int right)
{
    long long cnt=0;
    if(right>left)           
    {
        int mid = left + (right-left)/2;
        long long leftCount = mergeSort(a, left, mid);
        long long rightCount = mergeSort(a, mid+1, right);
        long long mergeCount = merge_inv(a, left, mid+1, right);
        return leftCount+rightCount+mergeCount;
    }
    return cnt;
}
long long solve(int a[], int n)
{
    return mergeSort(a, 0, n-1);  
}


int main()
{
	int n,A[MAXN];
	cin>>n;
	for(int i = 0; i < n ; i++){
		cin>>A[i];
	}
	cout<<solve(A,n)<<endl;
}
