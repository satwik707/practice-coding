#include <iostream>
#include<stack>
#include<unordered_set>
#include<vector>

using namespace std;
void dfs(vector<int>* edges,int start,unordered_set<int> &visited,stack<int>&finished)
{
    visited.insert(start);
    for(int i=0;i<edges[start].size();i++)
    {
        if(visited.count(edges[start][i])==0)
        {
        dfs(edges,edges[start][i],visited,finished);
        }
    }
    finished.push(start);
}
void dfs2(vector<int>* edgesT,int start,unordered_set<int> &visited,unordered_set<int>*component)
{
    visited.insert(start);
    component->insert(start);
    for(int i=0;i<edgesT[start].size();i++)
    {
        if(visited.count(edgesT[start][i])==0)
        {
            dfs2(edgesT,edgesT[start][i],visited,component);
        }
    }
}
unordered_set<unordered_set<int>*>* SCC(vector<int>* edges,vector<int> edgesT[],int n)
{
    unordered_set<int> visited;
    stack<int>finished;
    for(int i=0;i<n;i++)
    {
        if(visited.count(i)==0)
        {
            dfs(edges,i,visited,finished);
        }
    }
    
    visited.clear();
    unordered_set<unordered_set<int>*>* output=new unordered_set<unordered_set<int>*>();
    while(finished.size()!=0)
    {
        int element=finished.top();
        finished.pop();
        if(visited.count(element)==0)
        {
            unordered_set<int>*component=new unordered_set<int>();
            dfs2(edgesT,element,visited,component);
            output->insert(component);
            
        }
    }
    return output;
}
int main()
{
   int v;
   cin>>v;
   int e;
   cin>>e;
   vector<int>*edges=new vector<int>[v];
   vector<int>*edgesT=new vector<int>[v];
   for(int i=0;i<e;i++)
   {
       int a,b;
       cin>>a>>b;
       edges[a-1].push_back(b-1);
       edgesT[b-1].push_back(a-1);
       
   }
   unordered_set<unordered_set<int>*>* components=SCC(edges,edgesT,v);
   unordered_set<unordered_set<int>*>::iterator it=components->begin();
   while(it!=components->end())
   {
       unordered_set<int>* component=*it;
       unordered_set<int>::iterator it2=component->begin();
       while(it2!=component->end())
       {
           cout<<*it2+1<<" ";
           it2++;
       }
       cout<<endl;
       it++;
       
   }
   

    return 0;
}
