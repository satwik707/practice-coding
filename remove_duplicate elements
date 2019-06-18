#include <iostream>
#include<vector>
#include <set>

using namespace std;

vector<int> removeduplicate(vector<int>input) //function to return vector
{
    set<int>s;                             // using set because it only stores unique elements
    vector<int>result;
    for(int i=0;i<input.size();i++)          
    {
        if(s.find(input[i])==s.end())         //it checks the set .here find() acts as an iterator and if it reaches end of the set that
                                                // means the element is not present inside the set.(find() points to the end)
        {
            s.insert(input[i]);                  
            result.push_back(input[i]);           //push_back is used because we dont know the size of the result vector
        }
    }
    return result;
    
}


int main()
{
    vector<int>input(5);
    for(int i=0;i<input.size();i++)
    {
        cin>>input[i];                       //input[] is used and not push_back because we know the size of the input vector
    }
    vector<int>result;
    result=removeduplicate(input);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<endl;                
        }

    return 0;
}
