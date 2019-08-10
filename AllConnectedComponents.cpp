#include <iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
void f(int **matrix,int V,int start,bool* visited,vector<int>v)
{
    visited[start]=true;
    queue<int>q;
    q.push(start);
    while(!q.empty())
    {
        int current=q.front();
        v.push_back(q.front());
        q.pop();
        for(int i=0;i<V;i++)
        {
            if(matrix[i][current]==1 &&!visited[i])
            {
                q.push(i);
                visited[i]=true;
            }
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<=v.size()-1;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
bool checkvisited(int **matrix,int V,int start)
{
    vector<int>v;
    bool *visited=new bool[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        {
            f(matrix,V,i,visited,v);
            
        }
        
    }
}
int main()
{
  int V, E, tempX, tempY;
  cin >> V >> E;

  /*

  	   Write Your Code Here
	   Complete the Rest of the Program
	   You have to Print the output yourself
	 
  */
    int **matrix=new int*[V];
    for(int i=0;i<V;i++)
    {
        matrix[i]=new int[V];
        for(int j=0;j<V;j++)
        {
            matrix[i][j]=0;
        }
    }
    while(E--)
    {
        int s,f;
        cin>>s>>f;
        matrix[s][f]=matrix[f][s]=1;
    }
    checkvisited(matrix,V,0);
        

  return 0;
}
