using namespace std;
int main() {

	// Write your code here
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int a[3];
    int x=0;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        a[x]=arr[i];
        x++;
        if(x>2)
        {
           
            sort(a,a+3);
            if(a[0]+a[1]>a[2])
            {
                flag=1;
                break;
            }
            x=0;
        }
    }
    if(flag==1)
    {
    for(int i=0;i<2;i++)
    {
        cout<<a[i]<<" ";
    }
        cout<<a[2];
    }
    else
    {
        cout<<-1;
    }
}
