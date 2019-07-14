#include<bits/stdc++.h>
using namespace std;
struct worker
{
	int t;
	int cost;
	int speed;
};
bool comp(worker a,worker b)
{
	if(a.t!=b.t)
	return a.t<b.t;
	
	if(a.speed!=b.speed)
	return a.speed>b.speed;
	
	if(a.cost!=b.cost)
	return a.cost<b.cost;
	
}
int main()
{
	
		int n,i;
		long int d,work=0;
		long long int ans=0;;
		cin>>n>>d;
		worker p[n];
		for(i=0;i<n;i++)
		{
			cin>>p[i].t>>p[i].cost>>p[i].speed;
		}
		sort(p,p+n,comp);
		  long long int area =0;
    long long int bestSpeed = 0, Cost = 0, lastTime = p[0].t;
    for(int i=0;i<n;i++){
      long long int a = bestSpeed * (p[i].t - lastTime);
        area += a;
        
        if(area >= d)
            break;
        
        if(p[i].speed>bestSpeed){
            bestSpeed = p[i].speed;
            Cost += p[i].cost;
        }
        
        lastTime = p[i].t;
        
    }
    
    cout<<Cost;
    
 
}
