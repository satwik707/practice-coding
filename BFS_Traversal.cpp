#include <bits/stdc++.h>
using namespace std;
void print(int **matrix,int V,int sv,bool *visited)
{
    queue<int>q;
   q.push(sv);
    visited[sv]=true;
    while(!q.empty())
    {
        int current=q.front();
        cout<<current<<" ";
        q.pop();
        for(int i=0;i<V;i++)
        {
            if(matrix[current][i]==1 &&!visited[i])
            {
                q.push(i);
                visited[i]=true;
            }
        }
    }
    
}
int main() {
    int V, E;
    cin >> V >> E;

  /*

  	   Write Your Code Here
	   Complete the Rest of the Program
	   You have to take input and print the output yourself
	 
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
    for(int i=0;i<E;i++)
    {
        int s,e;
        cin>>s>>e;
        matrix[s][e]=1;
        matrix[e][s]=1;
        
    }
    bool *visited=new bool[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    print(matrix,V,0,visited);
delete[]visited;
    for(int i=0;i<V;i++)
    {
        delete[]matrix[i];
    }
    delete[]matrix;
  return 0;
}
