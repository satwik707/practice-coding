#include <iostream>
#include<bits/stdc++.h>

#include <string>

using namespace std;


 char ar[10][5]= {"", "", "abc", "def", "ghi", "jkl", 
                               "mno", "pqrs", "tuv", "wxyz"}; 

void keypad(int num,string out)
{
    if(num==0 || num==1)
    {
        cout<<out<<endl;
        return ;
    }
    int a=num%10;
    int b=num/10;
    for(int i=0;i<strlen(ar[a]);i++)
    {
        keypad(b,ar[a][i]+out);       //use branching
    }
}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    keypad(num,"");
}


int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
