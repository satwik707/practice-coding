#include<iostream>
using namespace std;
#include <vector>
#include "solution.h"
#include<map>
 
 
vector<int> longestSubsequence(int *arr, int n){
	// Write your code here
	map<int,bool> m;
  	for(int i=0 ; i<n ; i++){        // ek map liya h usme sabke keys ki value true h;
      m[arr[i]] = true;
    }
  	int len=1,r_len=1;
  	int j = 1;
  	int start;
  //  cout<<m[15]<<endl;
  	for(int i=0 ; i<n ; i++){
      j = 1;
      len = 1;
      if(m[arr[i] - j]==false){       //ye check kar rha h ki hum ekdum sequence k pehle number se count karen
        while(m[arr[i] + j]){         //agar koi arr[i] se peeche ka element h map me toh loop mhi chalega i++ hoga tbb jb vo  
          len++;                       //pehle wala element aayega tbbhi shuru se count hoga
          j++;                         //  agar pehla element hi aarr[i] hoga toh uske pehla map me hi nhi hoga toh vo false hoga
        }                              //tb vahan se count shuru.
        if(r_len < len){
          r_len = len;
          start = arr[i];            //jis element se longest sequence nikal rha h usko pakad lo
        }
      }
    }
 
  	vector<int> vect;
  	for(int i=0 ; i<r_len ; i++){
      vect.push_back((start + i));
    }
  return vect;
}
int main() {
	int n;
	cin >> n;
	int *input = new int[n];
	for(int i = 0; i < n; i++){
		cin >> input[i];
	}
	vector<int> output = longestSubsequence(input, n);
	for(int i = 0; i < output.size(); i++) {
		cout << output[i] << endl;
	}
}
