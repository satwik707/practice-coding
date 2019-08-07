#include <iostream>
#include<queue>
using namespace std;
bool f(int **matrix,int V,int path1,int path2,bool *visited)
{
    if(matrix[path1][path2]==1)
    {
        return true;
    }
    else
    {
        queue<int>q;
        q.push(path1);
        visited[path1]=true;
        while(!q.empty())
        {
            int current=q.front();
            if(current==path2)
            {
                return true;
            }
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
        return false;
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
       int s,f;
       cin>>s>>f;
       matrix[s][f]=1;
       matrix[f][s]=1;
       
   }
    int path1,path2;
    cin>>path1>>path2;
   
    
    bool *visited=new bool[V];
   if(f(matrix,V,path1,path2,visited))
   {
       cout<<"true";
   }
    else
    {
        cout<<"false";
    }
    
    for(int i=0;i<V;i++)
    {
        delete[]matrix[i];
    }
    delete[]matrix;
    delete[] visited;

  return 0;
}
