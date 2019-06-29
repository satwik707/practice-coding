#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int board[11][11];
bool placed(int board[][11],int n,int current_row,int col)
{
    for(int row=current_row-1;row>=0;row--)
    {
        if(board[row][col]==1)
        {
            return false;
        }
    }
    for(int row=current_row-1, j=col+1;row>=0,j<=n-1;row--,j++)
    {
        if(board[row][j]==1)
            
        {
            return false;
        }
    }
    for(int i=current_row-1, j=col-1;i>=0,j>=0;i--,j--)
    {
        if(board[i][j]==1)
        {
            return false;
        }
    }
    return true;
}
void helpqueen(int board[][11],int n,int current_row)
{
    if(current_row==n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<board[i][j]<<" ";
            }
        }
        cout<<endl;
        return;
    }
    for(int col=0;col<n;col++)
    {
    if(placed(board,n,current_row,col))
    {
        board[current_row][col]=1;
        helpqueen(board,n,current_row+1);
        board[current_row][col]=0;
    }
    }
    
}
void placeNQueens(int n){

    memset(board,0,11*11*sizeof(int));
  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Print output as specified in the question
  */
  helpqueen(board,n,0);


}




int main(){

  int n; 
  cin >> n ;
  placeNQueens(n);

}

