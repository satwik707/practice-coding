#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
    int n;
    long long k;
    cin>>n>>k;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    arr[0]=arr[0]+k;
    arr[n-1]=arr[n-1]-k;
    cout<<arr[n-1]-arr[0];
}
