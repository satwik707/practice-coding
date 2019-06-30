int waysUpStair(int n)
{
    
    /*Write your code here. 
     *Don't write main().
     *Don't take input, it is passed as function argument.
     *Don't print output.
     *Taking input and printing output is handled automatically.
    */ 
	
    if(n==0||n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 2;
    }
    
 //   int c=0;
   return  waysUpStair(n-1)+waysUpStair(n-2)+waysUpStair(n-3);
    
    
     
    

}
