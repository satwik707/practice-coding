#include <iostream>

using namespace std;
struct items{
    int values,weight;
}
bool compare(item a,item b)
{
    double x=a.value/a.weight;
    double y=b.value/b.weight;
    return x>y;
}
double knapsacksolve(item arr[],int W,int n)
{
    sort(arr,arr+n,comapre);
    int ans=0;
    double current=0;
    for(int i=0;i<n;i++)
    {
        if(current+arr[i].weight<=W)
        {
            current+=ar[i].weight;
            ans+=arr[i].value;
        }
        else
        {
            int remaining=current-W;
            ans+=((double)remaining/ar[i].weight)*ar[i].value;
            break;
        }
    }
    return ans;
}
int main()
{
    int W=10;
    items arr[]={{10,5},{20,4},{23,6}};
    cout<<knapsacksolve(arr,W,3);

    return 0;
}
