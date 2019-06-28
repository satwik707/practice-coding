#include<iostream>
#include "Solution.h"
using namespace std;
int partition(int input[],int si,int ei)
{
    int c=0;
    for(int i=si+1;i<=ei;i++)
    {
        if(input[si]>=input[i])
        {
            c++;
        }
        
    }
    int temp=input[si+c];
    input[si+c]=input[si];
    input[si]=temp;
    int x=si+c;
    int i=si;
    int j=ei;
 //   std::cout <<x;
    while(i<x && j>x)
        
        
    {
    if(input[i]<=input[x])
    {
        i++;
    }
    else if(input[j]>input[x])
    {
        j--;
    }
    else
    {
        int temp=input[j];
        input[j]=input[i];
        input[i]=temp;
        j--;
        i++;
    }
    } 
    
    
    return x;
}

void sort(int input[],int si,int ei)
{
    if(si>=ei)
    {
        return;
        
    }
    else
    {
    int c=partition(input,si,ei);
    sort(input,si,c-1);
    sort(input,c+1,ei);
    }
}
void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    int si=0;
    int ei=size-1;
    sort(input,si,ei);

}





int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}
