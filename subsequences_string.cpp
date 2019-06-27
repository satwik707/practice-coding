

#include <bits/stdc++.h>
#include<cmath>

using namespace std;
int subsequences(string input,string output[])
{
    if(input.empty())
    {
        output[0]="";         
        return 1;
    }
    int count=subsequences(input.substr(1),output);
    for(int i=0;i<count;i++)
    {
        output[i+count]=input[0]+output[i];
    }
    return 2*count;
}

int main()
{
    string s;
    cin>>s;
    double p=pow(2.0,double(s.size()));
    string* output=new string[p];
    int len=subsequences(s,output);
   // cout<<len;
    for(int i=0;i<len;i++)
    {
        cout<<output[i]<<endl;
    }

    return 0;
}

