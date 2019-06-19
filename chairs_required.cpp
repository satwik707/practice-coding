using namespace std;
int main() {

    int n;
    cin>>n;
     int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    int chair=1;
    int a=1;
    int b=0;
    int res=1;
    while(a<n && b<n)
    {
        if(arr1[a]<=arr2[b])
        {
            //cout<<chair<<" ";
            chair++;
            a++;
            if(res<chair)
            {
                res=chair;
            }
        }
        else
        {
            chair--;
            b++;
        }
        
    }
    cout<<res<<endl;;
	// Write your code here
}
