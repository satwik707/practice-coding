using namespace std;
int main() {

	// Write your code here
    int d;
    int s;
    cin>>s>>d;
    long long ar[d];
    ar[0]=1;
    s=s-1;
    
    int i=d-1;
        int l=s/9;
   
        for(int j=1;j<=l;j++)
        {
            ar[i--]=9;
        }
        s-=(9*l);
        ar[i]=s;
    i--;
    while(i>0)
    {
        ar[i--]=0;
    }
        
 
    
    for(int x=0;x<d;x++)
    {
        cout<<ar[x];
    }
   
   
}
