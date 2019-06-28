#include <iostream>
#include "solution.h"
using namespace std;
void merge(int input[],int left,int mid,int right)
{
    int i=left;
    int j=mid;
    int k=0;
    int temp[right-left+1];
    while(i<mid && j<=right)
    {
     //   std::cout<<input[i]<<" "<<input[j];
        if(input[i]>input[j])
        {
            temp[k++]=input[j++];
        }
        else
        {
            temp[k++]=input[i++];
        }
    }
    while(i<mid)
    {
      //  std::cout<<input[i];
        temp[k++]=input[i++];
    }
    while(j<=right)
    {
       // std::cout<<"sdfsdfdsf";
        temp[k++]=input[j++];
        
    }
    //std::cout<<temp[0]<<temp[1]<<" ";
    int s=0;
    for(int i=left;i<=right;i++)
    {
        input[i]=temp[s];
        s++;
       
    }
}
void sort(int input[],int left,int right)
{
    if(left>=right)
    {
        return ;
    }
    else
    {
        int mid=left +(right-left)/2;
        sort(input,left,mid);
        sort(input,mid+1,right);
        merge(input,left,mid+1,right);
        
        
    }
}
void mergeSort(int input[], int size){
	// Write your code here
    
        int left=0;
    int right=size-1;
     sort(input,left,right);
}







int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}
