// arr - input array
// n - size of array
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int minAbsoluteDiff(int arr[], int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
  //  int n1 = sizeof(arr)/sizeof(arr[0]); 
    sort(arr,arr+n);
    int x,y;
    double dif=1000000;
    for(int i=0;i<n-1;i++)
    {
        x=arr[i];
        y=arr[i+1];
        if(abs(x-y)<dif)
        {
            dif=abs(x-y);
        }
    }
    return dif;

}


#include <iostream>
#include "solution.h"
using namespace std;

int main() {

	int size;
	cin >> size;
	int *input = new int[1 + size];
	
	for(int i = 0; i < size; i++)
		cin >> input[i];
	
	cout<< minAbsoluteDiff(input,size) << endl;
	
	return 0;

}
