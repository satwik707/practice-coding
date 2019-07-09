#include<iostream>
using namespace std;
int findpower(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    
    int ans=findpower(x,n-1);
    return x*ans;
    
}
int main() {
	// Write your code here
    int x,n;
	cin>>x>>n;
    int p=findpower(x,n);
   cout<<p;
    
}
