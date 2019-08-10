#include <iostream>
using namespace std;
void isConnected(int **matrix,int V,int start,bool*visited)
{
    visited[start]=true;
    for(int i=0;i<V;i++)
    {
        if(matrix[i][start]==1 &&!visited[i])
        {
            visited[i]=true;
            isConnected(matrix,V,i,visited);
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
        int s,f;
        cin>>s>>f;
        matrix[s][f]=matrix[f][s]=1;
    }
    bool * visited=new bool[V];
    int flag=0;
   
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    isConnected(matrix,V,0,visited);
     for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        {
            flag=1;
            cout<<"false";
            break;
        }
        
    }
    if(flag==0){
        cout<<"true";
    }
delete[]visited;
    for(int i=0;i<V;i++)
    {
        delete[]matrix[i];
    }
    delete[]matrix;
  return 0;
}
